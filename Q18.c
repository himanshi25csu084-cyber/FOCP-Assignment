#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements: ");

    for(i = 0; i < n; i++) {
        
        int count = 0;

        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        
        if(count > 1) {
            
            int printedBefore = 0;
            for(j = 0; j < i; j++) {
                if(arr[i] == arr[j]) {
                    printedBefore = 1;
                    break;
                }
            }

            if(!printedBefore) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("-1");
    }

    return 0;
}
