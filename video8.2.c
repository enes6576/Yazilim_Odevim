#include <stdio.h>
#include <math.h>



   void main() {
	
	int a,b,c;
	float x1,x2,delta;
	
	printf("A degerini giriniz: ");
	scanf("%d",&a);
	
	printf("B degerini giriniz: ");
	scanf("%d",&b);
	
	printf("C degerini giriniz: ");
	scanf("%d",&c);
	
	delta=b*b-4*a*c;
	
	x1=(-b-(sqrt(delta)))/2*a;
	x2=(-b+(sqrt(delta)))/2*a;
   if(delta<0){
   	
   	
   	printf("kok yoktur");
   	
   }
   
   else{
   	
   printf("1. Kokun Degeri: %f\n",x1);
    printf("2. Kokun Degrei: %f",x2);
}
   

}
