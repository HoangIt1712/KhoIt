#include <stdio.h>
void main(){
  int arr[5];
  int i, sum = 0;
  for(i = 0; i < 5; i++){
    printf("nhap gia tri cho phan tu %d: ", i + 1);
    scanf("%d", &arr[i]);
}
  sum += arr[i];
  printf("tong cac phan tu trong mang la: %d", sum);
} 
