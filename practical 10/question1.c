#include <stdio.h>
int main() {
    int r,c,i,j,max,min;
    printf("Enter rows and cols: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    max=min=arr[0][0];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) {
            if(arr[i][j]>max) max=arr[i][j];
            if(arr[i][j]<min) min=arr[i][j];}
    printf("Max = %d, Min = %d\n",max,min);
    return 0;
}