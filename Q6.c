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
