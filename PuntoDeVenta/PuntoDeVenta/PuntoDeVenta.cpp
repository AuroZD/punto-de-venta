/* pseudo codigo
inicio del programa
	declaracion de variables (productos, precios, anticipo(V,F) ) (estructura)
	casos (que producto)
	n = cantidad de productos
	para caso n
		determinar cantidad
		calcular coste acorde a cantidad
			inicio si	
				si requiere anticipo
					indicar cuanto fue anticipado
				si no
					preguntar si va a anticipar
					inicio si
						si anticipa
							guardar anticipo
						si no
					fin del si
				fin del si 
			abrir archivo
				añadir a archivo
					producto
					cantidad
					costo
					anticipo
				fin de añadir
			cerrar archivo

fin del programa
*/

#include <stdio.h>

struct producto
{
	float precio;
	float anticipo;
};
//funcion para que sea acorde al producto

void calculador()
{
}
void main()
{
	//lista de productos
	producto taza;
	taza.precio = 90;
	taza.anticipo = 0;

	//variables
	int eleccion;
	//interfaz con texto que indique los productos existentes
	printf("Lista de productos:\n");
	printf("\tTaza\t\t1\n");


	//determinar a que producto se le va a  hacer la operacion
	printf("Que producto vas a vender?(numero del producto):");

	scanf_s("%i", &eleccion);

	switch (eleccion)
	{
	case 1:
			printf("\nElegiste opcion 1\n");
			//dummie
			printf("la taza cuesta %.2f y requiere anticipo de %.2f\n", taza.precio, taza.anticipo);
			break;
	default:
			break;
	}
}