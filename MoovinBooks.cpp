#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{char usuario[20],  contrasena[20];
int seccion, a, b, c;
printf("BIENVENIDO A MOVINBOOKS\n Tu libreria en casa\n");
printf("Introduzca su usuario:\n");
scanf("%s", &usuario);
system("cls");
printf("Introduzca su contraseña:\n");
scanf("%s",&contrasena);
printf("Gracias por contar con nosotros\n");
system("cls");
printf("Por favor, seleccione una de las opciones:\n Seccion adultos(1)\n Seccion infaltil(2)\n ");
scanf("%d",&seccion);
 
  switch(seccion) {
  	case 1:
  		printf("Elija el genero que desee\n Aventuras(1)\n Romantico(2)\n");
		scanf("%i", &a);
		if(a=1){ 
		printf("Puede escoger entre estos ejemplares:\n");
	    printf("Alianzas(1)\nHarry Potter(2)\nDivergente(3)\n");
        scanf("%s",&b);
        printf("Su seleccion ha sido guardada\n");
        return 0; 
	    }
	    else{
		printf("Error\n");
		}
    case 2:
        printf("Puede escoger entre estos ejemplares:\n");
	    system("cls");
        break;
    default:
        	printf("Error\n");
    	
  return 0;
 }
 }


