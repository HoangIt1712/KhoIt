#include <stdio.h>
void main(){
  int mang[5];
  int min, max, tong = 0, i;
  for(i = 0; i < 5; i++){
    printf("\n nhap gia tri phan tu %d: ", i + 1);
    scanf("%d", &mang[i]);
    tong += mang[i];
    if(i == 0){
      min = mang[0];
      max = mang[0];
   }
    if(mang[i] < min)
      min = mang[i];
    if(mang[i] > max)
      max = mang[i];
  }
  printf("\n tong gia tri cua mang la: %d", tong);
  printf("\n gia tri lon nhat trong mang la: %d", max);
  
  printf("\n gia tri nho nhat trong mang la: %d", min);
}
