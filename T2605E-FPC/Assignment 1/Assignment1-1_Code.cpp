#include <stdio.h>
#include <math.h>
int main(){
	
	float a,b,c;
	float ve_phai, can_ve_phai, x1, x2, x;
	
	printf("Nhap a = \n");
	scanf("%f", &a);
	printf("Nhap b = \n");
	scanf("%f", &b);
	printf("Nhap c = \n");
	scanf("%f", &c);
	
    if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh co vo so nghiem.\n");
            }else{
                printf("Phuong trinh vo nghiem.\n");
            }
        }else{
            x=-c/b;
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
        }
    }else{
    	ve_phai=(b*b)/(4*a*a)-(c/a);
		if(ve_phai<0){
            printf("Phuong trinh vo nghiem.\n");
        }else if(ve_phai==0){
            x=-b/(2*a);
            printf("Phuong trinh co nghiem kep: x=%.2f\n", x);
        }else{
    	    can_ve_phai=sqrt(ve_phai);
            
            x1=-b/(2*a)+can_ve_phai;
            x2=-b/(2*a)-can_ve_phai;
            
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1=%.2f\n", x1);
            printf("x2=%.2f\n", x2);
        }
	}
}
