/*año bisiesto*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	int a=0;
	
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

