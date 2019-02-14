#include <stdio.h>
#include <stdlib.h>
#include<math.h>	

int main(int argc, char *argv[]) {
	int val=0;
	float a,b,c=0;
	
	printf("+ Para Suma, - Para Resta, / Para Division,  Para Raiz\n ");
	
	printf("Que Operacion Desea Realizar:");
	scanf("%i",&val);
	
	switch(val)
	{
		//Suma
	 case 1:
	 	printf("Ingrese El Primer Numero\n");
	 	scanf("%f",&a);
	 	
	 	printf("Ingrese El Segundo Numero\n");
	 	scanf("%f",&b);
	 	
	 	c=a+b;
	 	
	 	printf("La Suma Es:%f\n",c);
	 	
		 return 0;
		 
		 printf("Desea  Realizar Alguna Otra Oeracion");
		 scanf("%i", &d)
		 ("Desea realizar alguna otra operacion");
	 	//Resta
	 	case 2:
	 	printf("Ingrese El Primer Numero\n");
	 	scanf("%f",&a);
	 	
	 	printf("Ingrese El Segundo Numero\n");
	 	scanf("%f",&b);
	 	
		 c=a-b;
	 	
	 	printf("La Resta Es:%f\n",c);
	 	
	 	return 0;
	 	
		 return 0;
	 	//Division
	 		case 4:
		 printf("Ingrese El Primer Numero\n");
	     scanf("%f",&a);
	 	do{
		 
		 printf("Ingrese El Segundo Numero\n");
	 	 scanf("%f",&b);
	 	 }while(b==0);
	 	
	     c=(a/b);
		 
		 printf("La Division Es:%f \n",c);
     	 
     	 
		return 0;
	 	//Raiz
	 		case 5:
	 	printf("Ingrese El Numero\n");
	 	scanf ("%f",&a);
	 	
		 c=sqrt(a);
	 	
	     printf("La Raiz Es: %f \n",c);	
		 
		 return 0;				
          }
	return 0;
}
