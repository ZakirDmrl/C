void ft_rev_int_tab(int *tab, int size);
void ft_rev_int_tab(int *tab, int size){
    for(int i = 0; i<size/2; i++){
        int temp = *(tab+size-i-1); 
        *(tab+size-i-1) = *(tab+i);
        *(tab+i) = temp;
    }
}
