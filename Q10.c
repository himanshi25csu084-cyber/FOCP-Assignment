#include <stdio.h>

int main() {
    int marks[50], n, i, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of students:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");
    
    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("Student %d (Position: %d)\n", i + 1, i + 1);
            count++;
        }
    }

    printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}
