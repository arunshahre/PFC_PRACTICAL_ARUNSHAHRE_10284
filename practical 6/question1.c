#include <stdio.h>
int main(){
    int a,b;
    printf("enter first number a =");
    scanf("%d",&a);
    printf("enter second number b =");
    scanf("%d",&b);
    for(;a<=b;a++){
        printf("%d \n",a);
    }
    return 0;
}