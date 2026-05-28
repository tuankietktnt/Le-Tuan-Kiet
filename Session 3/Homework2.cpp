#include <stdio.h>
#include <math.h>
int main(){
	
    float goc = 5000.0;
    float lai_suat = 0.08;
    float tong_tien;
    
    tong_tien=goc*(1+lai_suat)*(1+lai_suat)*(1+lai_suat);
    
    printf("Tong so tien nhan duoc sau 3 nam la: %.2f$\n",tong_tien);
}
