#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++){
            printf(" ");}
        for(int k=0;k<2*i-1;k++){
            printf("*");}
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int s=0;s<n-i;s++){
            printf(" ");}
        for(int k=0;k<2*i-1;k++){
        printf("*");}
        printf("\n");
    }
    return 0;
}