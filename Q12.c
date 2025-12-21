#include <stdio.h>

int main() {
    int scores[50], n, i;
    int max, min;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    
    max = min = scores[0];

    
    for(i = 1; i < n; i++) {
        if(scores[i] > max) {
            max = scores[i];
        }
        if(scores[i] < min) {
            min = scores[i];
        }
    }

    printf("\nHighest Score: %d\n", max);
    printf("Lowest Score: %d\n", min);

    return 0;
}
