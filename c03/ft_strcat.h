#include <string.h>
char *ft_strcat(char *dest, const char *src) {
    char *start_dest = dest;

    // İlk döngü, dest karakter dizisinin sonuna gitmek için kullanılıyor.
    while (*dest != '\0') {
        dest++;
    }

    int j = 0;

    // İkinci döngü, src karakter dizisini dest'in sonuna kopyalamak için kullanılıyor.
    while (*src != '\0') {
        *(dest + j) = *(src + j);
        j++;
    }

    // Son olarak, dest karakter dizisini null karakterle sonlandırıyoruz.
    *(dest + j) = '\0';

    return start_dest;
}
