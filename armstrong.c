//C Program to Check Armstrong Number

#include <stdio.h>

int main() {
    int num, n, c = 0, a = 0, dig, temp = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    n = num;
    
    while (num > 0) {
        num = num / 10;
        c++;
    }
    
    num = n;
    
    while (num > 0) {
        dig = num % 10;
        a = 1;
        
        for (int i = 0; i < c; i++) {
            a = a * dig;
        }
        
        temp = temp + a;
        num = num / 10;
    }
    
    if (temp == n)
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
    
    return 0;
}
