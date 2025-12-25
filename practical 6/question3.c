#include <stdio.h>
int main() {
    int pin;
    for (int i=1;i<=3;i++){
        printf("Enter your ATM PIN (Attempt %d of 3):",i);
        scanf("%d", &pin);
        if (pin==1234) {
            printf("Authentication successful. Access granted.\n");
            return 0;
        } else {
            printf("Invalid PIN.\n");
        }
    }
    printf("Too many failed attempts. Your card is blocked.\n");
    return 0;
}