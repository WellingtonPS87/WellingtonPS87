//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include<stdio.h>

    int Num=0;

void main(){
	printf("Informe um número:");
        scanf("%d", &Num);
	printf("O número informado foi: %d",Num);
    return 0;
}