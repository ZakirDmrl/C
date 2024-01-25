// Bu kod, ft_strcpy fonksiyonunu tanımlar ve bu fonksiyonu kullanarak bir kaynak karakter dizisini bir hedef karakter dizisine kopyalar.
// dest_start değişkeni, işlem sonunda hedef karakter dizisinin başlangıç adresini saklar ve bu adres geri döndürülerek
// hedef karakter dizisinin başlangıç adresi elde edilir.

char *ft_strcpy(char *dest, char *src);
char *ft_strcpy(char *dest, char *src){
    char *dest_start = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    return dest_start;
    
}