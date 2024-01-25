#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include<unistd.h>

#include <stdlib.h>
int find_to_size(int fd);
char *get_next_line(int fd);
char *get_next_line(int fd){
    if (fd == -1) {
        perror("Dosya açma hatası");
        exit(EXIT_FAILURE);
    }
    else{
    int size = find_to_size(fd);
    char *ptr = malloc(size*sizeof(char));
    read(fd,ptr,size);
    write(1,ptr,size);
    return ptr;

    }

}

int find_to_size(int fd){
    int size = 0;
    char c;
    read(fd,&c,1);
    while(c != '\n'){
        size++;
        read(fd,&c,1);
    }
    return size;
}


#endif