#include <stdio.h>

int main(){
 int size;
 int nb = -1000;
   int temp = nb;
    do{
        temp /= 10;
        size++;     
        printf("%d\n",temp);
    }while((temp >= 1) || (temp <= -1));

    if(nb >= 0){
    }
    else{
    size++;

    }
    printf("son: %d",size);
}