
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>

int main(){
	int a=0;
	
	setlocale(LC_ALL,"spanish");
	printf("introduzca un año: ");
	scanf("%d", &a);
	
	if((a%4==0)&&(a%100!=0)|| a%400==0){
		printf("es bisiesto");
	}
	else{
		printf("no es bisiesto");
	}
  return 0;
}

