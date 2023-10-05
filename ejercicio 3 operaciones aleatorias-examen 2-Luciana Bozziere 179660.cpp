/*operaciones aleatorias*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int r1, r2; 
	int a,s,r,m,d;
	srand(time(NULL));
	
	a=rand()%(5+1-1)+1;
	
	while(a<5)
	{
	
	r1=rand()%10;
	r2=rand()%10;
	
	 switch(a)
	  {
	   case 1:
		s=r1+r2;
	    printf("%d+%d=%d \n", r1,r2,s);
	   break;
	
	   case 2:
		r=r1-r2;
		printf("%d-%d=%d \n", r1,r2,r);
	   break;
	
	   case 3:
		m=r1*r2;
		printf("%d*%d=%d \n", r1,r2,m);	
	   break;
	
	   case 4:
		d=r1/r2;
		printf("%d/%d=%d \n", r1,r2,d);	
	   break;
	  }
	 a=rand()%(5+1-1)+1;
	}
 printf("terminacion de operaciones");
  return 0;
}
