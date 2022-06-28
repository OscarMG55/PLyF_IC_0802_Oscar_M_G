#include <stdio.h>

int main(){
	int e1,e2,e3,e4,en;
		
	do{
	printf("Entrada =\n");
	scanf("%i,%i,%i,%i",&e1,&e2,&e3,&e4);
	
	printf("Estado Verde");
	
	if(e1==1&&e2==1&&e3==0&&e4==0){
		printf("Estado=Ambar");
	}
	
	if(e1==0&&e2==1&&e3==0&&e4==0){
		printf("Estado=Rojo");
	}
	
	if(e1==0&&e2==0&&e3==1&&e4==0){
		printf("Estado=Verde");
	}
	
	printf("Desea ingresar otra entrada: 1.Si 2.No\n");
	scanf("%i",&en);
	}while(en=1);
}
