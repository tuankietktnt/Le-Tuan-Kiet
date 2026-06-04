#include <stdio.h>
#include <math.h>
int main(){
	int n, S = 0, so_du;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	while(n != 0){
		so_du = n % 10;
		S = S + so_du;
		n = n / 10;
	}
	printf("Tong cac chu so cua n la: %d", S);
}
