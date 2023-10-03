/*multiplo de un numero en un serie*/
#include<stdio.h>


int main(){
	int numero=0;

   while(numero<=100)
  {
  printf("%d",numero);
 	if (numero%3==0){
	 	printf(" es multiplo de 3\n");
	 	numero=numero+1;
 	}
 	else{
 		printf(" no es multiplo de 3\n");
 		numero=numero+1;
 	}
  }
 return 0;
}

