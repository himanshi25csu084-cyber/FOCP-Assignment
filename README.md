# FOCP-Assignment
#include<stdio.h>
int main(){
    int num, orgnum, rem, n=0;
    int result=0;
    printf("enter and integer: ");
    scanf("%d",&num);
    
    orgnum=num;
    while ( orgnum != 0){
        orgnum /= 10;
        ++n;
    }
    orgnum = num;

    while (orgnum !=0 ){
        rem = orgnum%10;

        int power = 1;
        for ( int i=0;i<n;i++){
            power *= rem;
        }
        result += power;
        orgnum /=10 ;
    }
    if ( result == num)
        printf("%d is an armstrong number \n",num);

    else 
        printf("%d is not an armstrong number \n",num);

return 0;
}
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d\n", a);

    return 0;
}
#include <stdio.h>


int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;   
        a = a ^ b;           
        b = carry << 1;      
    }
    return a;
}


int subtract(int a, int b) {
    
    return add(a, add(~b, 1));
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);
    printf("Result of %d - %d = %d\n", num1, num2, result);

    return 0;
}
#include <stdio.h>


void swapWithTemp(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

int temp;
    
    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap:  a = %d, b = %d\n", a, b);
}#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point lies in Quadrant II.\n");
    }
    else if (x < 0 && y < 0) {
        printf("The point lies in Quadrant III.\n");
    }
    else if (x > 0 && y < 0) {
        printf("The point lies in Quadrant IV.\n");
    }
    else if (x == 0 && y == 0) {
        printf("The point is at the Origin.\n");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>


int binaryToDecimal(long long binary)
{
    int decimal = 0, i = 0, rem;
    while (binary != 0)
    {
        rem = binary % 10;              
        decimal += rem * pow(2, i);     
        i++;
        binary /= 10;                   
    }
    return decimal;
}


long long decimalToBinary(int decimal)
{
    long long binary = 0;
    int rem, place = 1;

    while (decimal != 0)
    {
        rem = decimal % 2;          
        binary += rem * place;      
        decimal /= 2;
        place *= 10;                
    }
    return binary;
}

int main()
{
    int choice;
    printf("=== Binary-Decimal Converter ===\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    }
    else if (choice == 2)
    {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
    }
    else
    {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n=5, i, j;
    int b;  


    for (i = 1; i <= n; i++)
    {
        b = 0;  

        
        for (j = 1; j <= i; j++)
        {
            printf("%d", b);
            b = 1 - b;  
        }

        printf(" ");  
        
        b = 0;  
        for (j = 1; j <= i; j++)
        {
            printf("%d", b);
            b = 1 - b;
        }

        printf("\n");  
    }

    return 0;
}#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", first);
            continue;
        }
        if(i == 2) {
            printf("%d ", second);
            continue;
        }

        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}#include <stdio.h>

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
}#include <stdio.h>

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
}#include <stdio.h>

int main() {
    int scores[50], even_array[50], odd_array[50];
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

   
    for(i = 0; i < n; i++) {
        if(scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    
    printf("\nEven Scores: ");
    for(i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd Scores: ");
    for(i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    return 0;
}

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
}#include <stdio.h>

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
}#include <stdio.h>

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
}#include <stdio.h>

int main() {
    int arr[50], n, i, last;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    last = arr[n - 1];

    
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[0] = last;

    printf("\nArray after clockwise rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}#include <stdio.h>

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













