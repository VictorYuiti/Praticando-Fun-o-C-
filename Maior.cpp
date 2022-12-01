#include <stdio.h>

int Maior(int x, int y){
	int compar;
        
    if(x>y){
        compar = x;
    }else compar = y;

    return (compar);
}

int main(){
	int x, y, compar;
	
	scanf("%d%d", &x, &y);
	
	compar = Maior(x,y);

    printf("O Maior e: %d\n", compar);

    return 0;
}
