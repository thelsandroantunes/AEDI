/*  Autor: Thelsandro Costa Antunes
*   Data: 23/08/2017
*   Matrícula: 1715010666
*   EST-UEA
*   Engenharia Ciclo-Básico
*   Disciplina: Linguagem de Programação II
*   Professora: Elloá B. Guedes
*   Aquecimento para Exercícios Práticos
*/


#include<stdio.h>

int main(){

    int dia, mes, ano, ok, bis=0;

    scanf("%d/%d/%d", &dia,&mes,&ano);

    if((mes>=1 && mes<=12) && (dia>=1 && dia<=31) && (ano >1)){

        switch(mes){

        case 1:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;

            break;
        case 2:

            if(((ano%4 == 0 && ano%100 != 0) || ano%400 == 0)){
                bis = 1;
            }

            if(bis){
                if(dia >= 1 && dia <= 29){
                    ok = 1;
                }
            }else{
                if(dia >= 1 && dia <= 28){
                    ok=1;
                }else{
                    ok = 0;
                }
            }

            break;
        case 3:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;
        case 4:
            if (dia >= 1 && dia <= 30) ok=1;
            else ok = 0;
            break;
        case 5:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;
        case 6:
            if (dia >= 1 && dia <= 30) ok=1;
            else ok = 0;
            break;
        case 7:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;
        case 8:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;
        case 9:
            if (dia >= 1 && dia <= 30) ok=1;
            else ok = 0;
            break;
        case 10:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;
        case 11:
            if (dia >= 1 && dia <= 30) ok=1;
            else ok = 0;
            break;
        case 12:
            if (dia >= 1 && dia <= 31) ok=1;
            else ok = 0;
            break;

        }
    }else{
        ok = 0;
    }

    if(ok)  printf("True");
    else printf("False");

    return 0;
}
