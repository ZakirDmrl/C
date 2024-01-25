#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int id;
    char name[45];
    char surname[45];
    char gender;
    int classid;

};

struct Student CreateStudent(){
    char c;
    int id;
    char name[45];
    char surname[45];
    char gender;
    int classid;
    printf("id: ");
    scanf("%d",&id);
    printf("name: ");
    scanf("%c",&c);
    fgets(name,45,stdin);
    printf("surname: ");
    fgets(surname,45,stdin);
    // scanf("%s",surname);
    printf("gender(E/K): ");
    scanf(" %c",&gender);  // Boşluk bırakarak karakter okuması yapılıyor.
    printf("classid: ");
    scanf("%d",&classid);
    // std.id = id;
    // std.name[45]= name;
    // std.surname[45]= surname;
    // std.gender = gender;
    // std.classid = classid;
    struct Student std = { id,name,surname,gender,classid};
    printf("id: %d name: %s surname: %s gender: %c classid: %d",id,name,surname,gender,classid);
    return std;
}
void WriteStudent(FILE * fp,struct Student std){
    fwrite(&std,sizeof(struct Student),1,fp);
}
void ReadStudent(FILE * fp){
//     char c;
//     c = getc(fp);
//     while(c != EOF){
//         printf(c);
//         c = getc(fp);        
//     }
struct Student std = { 0, "", "","",0};
 rewind( fp );
while(!feof(fp)){
    fread(&std,sizeof(struct Student),1,fp);
    printf("id: %d name: %s surname: %s gender: %c classid: %d\n",std.id,std.name,std.surname,std.gender,std.classid);
}
}

int main(){
FILE *fp = fopen("geneltekrar.exe","w+");
struct Student student = CreateStudent();
WriteStudent(fp,student);
ReadStudent(fp);





    return 0;
}