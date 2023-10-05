/*intercambio de valores*/
#include <stdio.h>

int main(){
	
	int v1, v2, v3, a;
	printf("1.-escribe un numero entero: ");
	scanf("%d", &v1);
    printf("2.-escribe un numero entero: ");
	scanf("%d", &v2);
	printf("3.-escribe un numero entero: ");
	scanf("%d", &v3);

	a=v2;
	v2=v1;
	v1=v3;
	v3=a;
	
	
	printf("intercambios: \n");
	printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);
    printf("v3 = %d\n", v3);
    
   return 0;
}
