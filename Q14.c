#include <stdio.h>

int main() {
    int arr[50], n, i, j, count = 0, isPrime;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 2) {
            continue;  
        }

        isPrime = 1;  

        for(j = 2; j * j <= arr[i]; j++) {  
            if(arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            count++;
        }
    }

    printf("\nTotal prime numbers in the array: %d\n", count);

    return 0;
}
