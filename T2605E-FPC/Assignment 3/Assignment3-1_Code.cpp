#include <stdio.h>
#include <math.h>
int main(){
	int a, b, Tich;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	Tich = a * b;
	while(a != b){
		if(a > b){
		a = a - b;
		}else{
		b = b - a;
		}
	}
	printf("\nUCLN la: %d\n", a);
	printf("BCNN la: %d", Tich/a);
}
