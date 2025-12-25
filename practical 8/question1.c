#include <stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    for(;a>0;a/=10){
        sum=sum+a%10;
    }
    printf("Sum of digit is = %d",sum);
    return 0;
}