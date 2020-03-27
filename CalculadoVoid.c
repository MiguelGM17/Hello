#include <stdio.h>
#include <math.h>
#include <windows.h>

	int opcion;
	float n1, n2, resultado;
	
	void suma(void){ 
		resultado = n1 + n2;
		printf("%f", resultado);
	return;
}
	void resta(void){ 
		resultado = n1 - n2;
		printf("%f", resultado);
	return;
}
void division(void){ 
	resultado = n1 / n2;
		printf("%f", resultado);
	return;
}
void multiplicacion(void){ 
	resultado = n1 * n2;
		printf("%f", resultado);
	return;
}
void potencia(void){ 
	resultado = pow(n1,n2);
		printf("%f", resultado);
	return;
}
void raizcuadrada(void){ 
	resultado = sqrt(n1);
		printf("%f", resultado);
	return;
}


int main()
{

	do{
	system("pause");
	system("cls"); //Limpiar pantalla
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Salir\n");
	scanf("%d",&opcion);	
	system("cls"); //Limpiar pantalla
	
	if(opcion==6){
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
	}
	else if(opcion>=7){
		
	}
	else{
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
		printf("\nDame el segundo valor: ");
		scanf("%f", &n2);
	}

	//Estructura de control de selección multiple

	switch(opcion)
	{
	case 1:
		suma ();
		break;
	case 2:
		resta ();
		break;
	case 3: 
		if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		division ();
		}
		break;
	case 4: 
		multiplicacion ();
		break;
	case 5: 		
		potencia ();
		break;
	case 6: 
		if(n1<0){
				printf("No esta definida");
		}
		else{
			raizcuadrada ();
		}
		break;
	default:
		printf("Salir");
		exit(0);
	}	//Sale break
}while(opcion<7);

	return 0;
} 
