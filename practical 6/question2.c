#include <stdio.h>
int main(){
    int a,sum=0;
    printf("enter last number ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            continue;
        }
        sum=sum+i;
    }
    printf("Sum of even umber = %d",sum);
    return 0;
}