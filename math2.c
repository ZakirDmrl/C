#include <stdio.h>
#include <stdbool.h>
bool isPolindrome(int i){
    int n,d,y = 0;
    if(i < 0){
        return false;
    }
    n = i;
    while (n){
        d = n % 10;
        y= y* 10+ d;
        n = n /10;
    }
    return (y == i);
}
int main(){
    int x;
    printf("Enter the integer: ");
    scanf("%d",&x);
    printf("Is Palindrome: %d",isPolindrome(x));
    return 0;
}