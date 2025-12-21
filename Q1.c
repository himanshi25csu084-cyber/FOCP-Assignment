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