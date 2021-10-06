#include <stdio.h>

int  main(int c, char** args)
{

	int ancho; //ancho de la pantalla del dispositivo
	int altura; //altura de la pantalla del dispositivo 
	float porcentaje_de_x; // porcentaje donde se encuentra la coordenada x
	float porcentaje_de_y; //porcentaje donde se encuentra la coordenada y
	float porcentaje_del_ancho; // porcentaje del ancho del elemento a mostrar
	float porcentaje_de_la_altura; // porcentaje de la altura del elemento a mostrar
	int coordenada_superior_x; // coordenada superior izquierda de x
	int coordenada_superior_y; //coordenada superior izquierda de y
	int coordenada_inferior_x; //coordenada inferior derecha de x
	int coordenada_inferior_y; //coordenada inferior derecha de y

	scanf_s("%i", &ancho); //prueba de cambio
	scanf_s("%i", &altura);
	scanf_s("%f", &porcentaje_de_x);
	scanf_s("%f", &porcentaje_de_y);
	scanf_s("%f", &porcentaje_del_ancho);
	scanf_s("%f", &porcentaje_de_la_altura);

	coordenada_superior_x = ancho * porcentaje_de_x;
	coordenada_superior_y = altura * porcentaje_de_y;
	coordenada_inferior_x = coordenada_superior_x + (ancho * porcentaje_del_ancho);
	coordenada_inferior_y = coordenada_superior_y + (altura * porcentaje_de_la_altura);

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, altura, porcentaje_de_x, porcentaje_de_y,
		porcentaje_del_ancho, porcentaje_de_la_altura, coordenada_superior_x, coordenada_superior_y,
		coordenada_inferior_x, coordenada_inferior_y);

	return 0;
}
