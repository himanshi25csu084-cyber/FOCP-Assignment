#include <stdio.h>

int main() {
    int arr[100], n, choice, element, position, i;

    
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

    
    printf("\n\nWhere do you want to insert the element?\n");
    printf("1. Front\n2. Middle (Specific Position)\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if(choice == 1) {
        
        for(i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        n++;

    } else if(choice == 2) {
       
        printf("Enter the position (1 to %d): ", n + 1);
        scanf("%d", &position);

        if(position < 1 || position > n + 1) {
            printf("Invalid position!\n");
            return 0;
        }

        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        n++;

    } else if(choice == 3) {
        
        arr[n] = element;
        n++;

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
