#include<stdio.h>
#include<string.h>
#define L 5
#define C 10


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
        scanf("%s", word[i]);
        strcat(word[i],"\0");
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


/*void ordAlfabeto(){
    char newNome[L][C];
    int i,j;

    for(i=0;i<L;i++){
        if(strlen   )
        
        for(){
        }
    }
 }*/

void bubble_sort(char vet[L][C]){

    int i,j;
    char matx[L][C];

    for(i=0;i<L;i++){        
        printf("%d\n", vet[i][0]);           

    }
    imprime(matx,L);
}


int main(){

    char nome[L][C];

    preenche(nome);
    bubble_sort(nome);
        

    //imprime(nome,L);

    return 0;

}
