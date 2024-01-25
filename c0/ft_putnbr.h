#ifndef FT_PUTNBR_H
#define FT_PUTNBR_H
#include <unistd.h>


void ft_putnbr(int nb);
void ft_putnbr(int nb){
    size_t size;
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

    if(nb < 0){
        write(1,"-",1); // negatif sayı için işareti yazdır
        nb = -nb; // negatif sayıyı pozitife çevir
    }
    char buffer[size]; // En büyük sayı olan 2147483648 için yeterli boyut
    int i = 0;

    do{
        buffer[i++] = nb % 10 + '0';
        nb /= 10;
    }while (nb>0);
    
    while(--i >= 0){
        write(1,&buffer[i],1);
        
    }
    

}

#endif


