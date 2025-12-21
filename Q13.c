#include <stdio.h>

int main() {
    int arr[50], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < n; i++) {
        
        
        if(i == 0 && arr[i] >= arr[i + 1]) {
            printf("\nPeak element found: %d at index %d\n", arr[i], i);
            return 0;
        }

       
        if(i == n - 1 && arr[i] >= arr[i - 1]) {
            printf("\nPeak element found: %d at index %d\n", arr[i], i);
            return 0;
        }

        
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("\nPeak element found: %d at index %d\n", arr[i], i);
            return 0;
        }
    }

    printf("\nNo peak element found.\n");
    return 0;
}
