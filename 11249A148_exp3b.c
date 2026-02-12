/*Bin Packing Best Fit Algorithm*/
#include<stdio.h>
int main()
{
 printf("Enter the number of items: ");
 int n;
 scanf("%d", &n);
 int weights[n];
 printf("Enter the weights of the items: ");        
    for(int i = 0; i < n; i++){
        scanf("%d", &weights[i]);
    }
    int bin_capacity;
    printf("Enter the capacity of each bin: ");
    scanf("%d", &bin_capacity);
    
    // Array to store remaining capacity of each bin
    int bins[n];  // Maximum n bins needed
    int num_bins = 0;
    
    for(int i = 0; i < n; i++){
        int best_bin = -1;
        int best_fit_space = bin_capacity + 1;  // Initialize to more than capacity
        
        // Find the best fit bin (least remaining space that fits the item)
        for(int j = 0; j < num_bins; j++){
            if(bins[j] >= weights[i]){
                // Check if this bin has less wasted space
                if(bins[j] - weights[i] < best_fit_space){
                    best_fit_space = bins[j] - weights[i];
                    best_bin = j;
                }
            }
        }
        
        if(best_bin != -1){
            // Place item in the best fit bin
            bins[best_bin] -= weights[i];
        } else {
            // Create a new bin
            bins[num_bins] = bin_capacity - weights[i];
            num_bins++;
        }
    }
    
    printf("Minimum number of bins required: %d\n", num_bins);
    return 0;
}  