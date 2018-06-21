#include <stdio.h>
#include <string.h>

typedef struct{
        char sNome[255];
}Jogadores;

Jogadores jPlayers[5];

void ordenaNomes(int tamanho){
    char sNomeAux[255];
    for( int i = 1; i < tamanho; i++ ) {
        for( int j = i; j > 0; j-- ) {
            if( strcoll(jPlayers[j].sNome, jPlayers[j-1].sNome) < 0){
              strcpy(sNomeAux,jPlayers[j].sNome);
              strcpy(jPlayers[j].sNome,jPlayers[j-1].sNome);
              strcpy(jPlayers[j-1].sNome,sNomeAux);}
        }
    }
}

int main(){
    int i;
    for(i=0;i<5;i++) {
        printf("Nome: ");
        scanf("%s%*c", jPlayers[i].sNome);
    }
    ordenaNomes(5);
    for (i = 0; i < 5; i++) printf("%s\n", jPlayers[i].sNome);
    return 0;
}
