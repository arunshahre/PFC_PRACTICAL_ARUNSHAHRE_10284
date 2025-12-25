#include <stdio.h>
int main(){
    int choice;
    printf("Enter choice (1=Hello, 2=Bye): ");
    scanf("%d",&choice);
    switch (choice){
        case 1: printf("Hello!\n");break;
        case 2: printf("Bye!\n");break;
        default: printf("Invalid choice\n"); }
    return 0;
}