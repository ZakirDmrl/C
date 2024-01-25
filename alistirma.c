#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 
1D Arrays in C
int main(){
	int n;
	int k;
	scanf("%d",&n);
	int array[n];
	int result=0;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		array[i]=k;
		result+=k;
	}
	printf("%d",result);
	return 0;
}
*/
/*Array Reversal
int main(){
	int n;
	int k;
	scanf("%d",&n);
	int array[n];
	int i;
	int temp;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		array[i]=k;
		}
	for(i=n-1;i>=0;i--){
		printf("%d ",array[i]);
		}
	}
*/
/*Array Reversal
int main(void){
char *s;
s= malloc(1024 * sizeof(char));
gets(s);               //Dynamic Memory Exp
s= realloc(s,strlen(s)+1);
int i;
for(i=0;i<strlen(s)+1;i++){
	if(s[i]!= ' ') printf("%c",s[i]);
	else printf("\n");
}
return 0;
}
*/
/*
int main() {
    int digits[10] = {0}; //10 tam sayýlýk, baþlangýç deðerleri sýfýr olan bir tam sayý dizisi yaratýyoruz
    char c;
    do{
		scanf("%c", &c);
		if(c == '0' && c== '9') digits[c] += 1;
	}while(c=='\n');
	int i;
    for(i = 0; i< 10; i++) printf("%d ", digits[i]);
    return 0;
}

*/





















