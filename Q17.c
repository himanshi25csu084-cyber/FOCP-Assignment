#include <stdio.h>

int main() {
    int arr[100], n, i, choice, position;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    printf("\n\nWhere do you want to delete an element?\n");
    printf("1. Front\n2. Middle (Specific Position)\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
       
        for(i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

    } else if(choice == 2) {
        
        printf("Enter the position to delete (1 to %d): ", n);
        scanf("%d", &position);

        if(position < 1 || position > n) {
            printf("Invalid position!\n");
            return 0;
        }

        for(i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

    } else if(choice == 3) {
        
        n--;
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    
    printf("\nUpdated Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
