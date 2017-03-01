/*Ficha de Exercícios 1: Introdução à Algoritmia e à Linguagem C
Daniel Gomes A74729
13/10/2016
*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*calcular o maior de dois números inteiros fornecidos pelo utilizador (N1 e N2).
return (a<b ? a : b); could be rewritten as :
if (a < b)
	return a;
else
return b;

*/
int ex1(int n1, int n2){
	return(n1 < n2 ? n2 : n1);
}

/*calcular o maior de três números inteiros dados pelo utilizador (N1, N2 e N3).*/
int ex2(int n1, int n2, int n3){
	int num;
	num=ex1(n1, n2);
	return ex1(num, n3);
}

/*calcular, dados três números inteiros, a soma dos dois menores.*/
int ex3(int n1, int n2, int n3){
	int num;
	num = ex2(n1, n2, n3);
	return (n1 + n2 + n3 - num);
}

/*calcular, media de 3 notas*/
float ex4(float n1, float n2, float n3){
	float num;
	num = (float)(n1 + n2 + n3) / 3;
	if (num > 9.5) printf("Aprovado!");
	else printf("Reprovado :( ");
	return num;
}

void ex5(int num){
	if (num % 2 == 0) printf("Par\n");
	else printf("Impar\n");
	if (num >= 0) printf("Positivo\n");
	else printf("Negativo\n");
}

int main(void){
	//int num1, num2;
	/*
	printf("INSIRA 2 NUMEROS PARA COMPARAR: ");
	scanf("%d %d", &num1,&num2);

	printf("resultado final: %d\n", ex1(num1, num2));
	ex5(11);
	*/
	printf("Hello"" World\n");

	printf("Bem-vindos ao /Mundo\\ da programação em \"C\" " );
	return 0;
}