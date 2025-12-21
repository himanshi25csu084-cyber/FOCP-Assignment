#include <stdio.h>

int main() {
    int scores[50], n, i, found = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    
    for(i = 0; i < n; i++) {
        if(scores[i] == 99) {
            printf("First occurrence of score 99 found at position: %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Score 99 not found in the array.\n");
    }

    return 0;
}
