#include <stdio.h>

int calcularDelta(int a, int b, int c){
	int saida;
	saida = a*a-4*b*c;
	return(saida);
}

int main(){
	
	int b, a, c, saida;
	
	scanf("%d%d%d", &a, &b, &c);
	
	saida = calcularDelta(a,b,c);
	
	printf("%d\n", saida);
 
return 0;
    
}
