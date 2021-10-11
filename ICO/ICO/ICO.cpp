#include <stdio.h>

int  main(int c, char** args)
{

	int idato1;
	int idato2;
	int iresultado;

	printf("\n ----- SUMA DE DATOS [DOS DATOS]-----\n");

	printf("ingresa tu primer numero:");
	scanf_s("%d", &idato1); //entrada del primer dato de tipo numerico

	printf("ingresa tu segundo numero:");
	scanf_s("%d", &idato2); //entrada del segundo dato de tipo numerico

	iresultado = idato1 + idato2;

	//imprimir el resultado

	printf("El resultado de la suma es: %i", iresultado);

	return 0;
}