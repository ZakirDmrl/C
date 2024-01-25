#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size){

for(int i = 0; i<size; i++){ 
    for(int i = 0; i<size; i++){   
        if(*(tab+i+1) != '\0'){
            if(*(tab+i) >*(tab+i+1) ){
                int temp = *(tab+i);
            *(tab+i) =*(tab+i+1);
            *(tab+i+1) = temp;
            }
        }
        else{
            break;
        }
    }
}
}