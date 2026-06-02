#include <stdio.h>
int main(){
	int a, i;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	
	i = 0;
	
	while(a != 0){
		i = i * 10 + (a % 10);
        a = a / 10;
	}
	printf("So dao nguoc la: %d", i);
}
