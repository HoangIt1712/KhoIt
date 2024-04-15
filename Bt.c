#include <stdio.h>

int main(){
	char name[50];
	printf("Nhap ten do uong: ");
	scanf("%[^/n]s", name);
    int sl; 
	printf("Nhap so luong: ");
	scanf ("%d", sl);
	float gia;
	printf("Nhap gia do uong: ");
	scanf ("%f", gia);
	float tt, ttv, tax, thanhtoan;
	tt = gia * sl;
	tax = tt * 0.8;
	thanhtoan = tt - ttv - tax;
    int t1 =0;
	scanf("%f", &t1);
	if(t1 >=0 && t1 <=2){
		switch(t1) {
		case 1: (ttv = 0.05 * tt);
		break; 
		case 2: (ttv = 0.1 * tt);
		break; 
		case 0: (ttv = 0);
		break; 
		} 
	}
	 else{printf("Ban nhap chua chinh xac: ");
	 }
	 printf("Tong so tien can thanh toan la: %f", thanhtoan);
	return 0; 
} 
