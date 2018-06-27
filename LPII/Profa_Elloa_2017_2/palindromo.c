#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strncase(char* s){
	char notcase(char c){
		//if((c >= 'a') && (c <= 'z')) return 'A'+(c-'a');
		if((c >= 'A') && (c <= 'Z')) return 'a'+(c-'A');

		return c;
	}

	while(*s != '\0'){
		*s = notcase(*s);
		s++;
	}
}

int main(){

	char nome[80];

	scanf("%s", nome);

	int tam = strlen(nome);
	int ok = 1;

	strncase(nome);
	printf("%s\n", nome);


	for(int i=0;i<(tam/2)+1;i++){
		if(nome[i] != nome[tam-i-1]){
			ok = 0;
		}
	}

	if(ok){
		printf("Eh\n");
	}else{
		printf("NAO\n");
	}
	
	return 0;
}
