#include<stdio.h>

int primo(num){
    int cont=0;
    int i=1;
    while(i<num){
        if((num%i)==0){
            cont++;
        }
        i++;
    }
    if(cont==2){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){

    int aux;
    int vet[100];
    int j=0;

    while(j<100){
        scanf("%d", &vet[j]);
        j++;
    }

    for(int i=0;i<100;i++){
        if(vet[i]>vet[i+1]){
            aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
        }
    }


    return 0;
}
