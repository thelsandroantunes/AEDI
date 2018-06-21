#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define L 3
#define C 5


void ordena(char matx[L][C]){
  char vet[C];
  int i,j;
  
  for(i=1;i<L;i++){
    for(j=1;j<L;j++){
      if(strcmp(matx[j-1],matx[j]) > 0){
        strcpy(vet,matx[j-1]);
        strcpy(matx[j-1],matx[j]);
        strcpy(matx[j],vet);
      }
    }
  }
    
  for(i=0;i<L;i++) printf("\n%s\n", matx[i]);
}

int procuraErro(char palavra[]){

    int e = 1,j,i;
    //,'1','2','3','4','5','6''7','8','9','0'
    char caracteres[]= {'~','!','@','#','$','%','%','^','&','*','(',')','_','+'};

    for(i=0;i<strlen(palavra);i++){
        for(j=0;j<strlen(caracteres);j++){
            if(palavra[i]  ==  caracteres[j]){
                e = 0;
                j = strlen(caracteres) + 1;
                i = strlen(palavra) + 1;
            }            
        }
    }

    return e;
}

void preenche(char word[L][C]){

    char cpWord[C];

    for(int i=0;i<L;i++){
        //gets(word[i]);
        scanf("%s", word[i]);
        //strcat(word[i],"\0");
        //strcpy(cpWord,word[i]);
        //procuraErro(cpWord);

    }

}

void imprime(char word[L][C], int tam){
    for(int i=0; i<tam; i++){
        printf( " %s\n", word[i]);
        fflush(stdin);
    }
}

int main(){

    char nome[L][C];
    
    preenche(nome);
    ordena(nome);    
    
    //imprime(nome,L);

    return 0;

}
