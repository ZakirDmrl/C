#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
int fd = open("dosya.txt",O_CREAT);
printf("%d",fd);

char *ptr = get_next_line(fd);
write(1,ptr,20);











    return 0;
}