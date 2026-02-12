/*Bin Packing First Fit Algorithm*/
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
    int bins = 0;
    int current_bin_weight = 0;
    for(int i = 0; i < n; i++){
        if(current_bin_weight + weights[i] <= bin_capacity){
            current_bin_weight += weights[i];
        } else {
            bins++;
            current_bin_weight = weights[i];
        }
    }
    if(current_bin_weight > 0){
        bins++;
    }
    printf("Minimum number of bins required: %d\n", bins);
    return 0;
    }
