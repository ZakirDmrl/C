#include <stdio.h>
#include <string.h>
#define LSIZ 128
#define RSIZ 10
int main(){
    // FILE *fp;
    // char fileName[20];
    // gets(fileName);
    // fp=fopen(fileName,"a+");
    //     if(fp == NULL){
    //         printf("File couldn't open!");
    //     }
    //     else{
    //         printf("%s created successfully.",fileName);
    //         fprintf(fp,"This is the content of the file %s.\n",fileName);
    //         fseek(fp,0,SEEK_SET);
    //         fprintf(fp,"Yeni yazi\n");
    //         fclose(fp);
    //     }
    // fp =fopen(fileName,"r");
    //     if(fp==NULL){
    //         printf("File couldn't open!");
    //     }
    //     else{
    //         int c;
    //         int sayac=1;
    //         do{
    //             c=getc(fp);
    //             printf("%c",c);
            
    //         }while(c != EOF);
    //     }
    char line[RSIZ][LSIZ];
    char fname[20];
    FILE *fptr = NULL;
    int i=0;
    int tot=0;
    printf("\n\n Read the file and store lines into an array :\n");
    printf("--------------------------------------------------\n");
    printf("Input the filename to be opened: ");
    scanf("%s",fname);
    fptr = fopen(fname,"r");
    while(fgets(line[i], LSIZ,fptr))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
    printf("\n The content of the file %s are: \n",fname);
    for(i=0;i<tot;i++){
        printf("%d) ",i+1);
        printf("%s\n",line[i]);
    }
    printf("\n");






    return 0;
}