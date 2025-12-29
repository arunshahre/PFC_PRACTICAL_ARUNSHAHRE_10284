#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n;i++) if(arr[i]%2==0) sum+=arr[i];
    printf("Sum of even elements = %d\n",sum);
    return 0;
}