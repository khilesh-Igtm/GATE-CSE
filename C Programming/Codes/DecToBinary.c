#include<stdio.h>

int main(){
  int num, i =0;
  int binary[32]; // bcz int = 4 bytes = 32 bits 

  printf("Enter a decimal number: ");
  scanf("%d", &num);

  if(num ==0){
    printf("Binary =0");
    return 0;
  }

  while(num > 0){
    binary[i] = num %2;
    num = num/2;
    i++;
  }

  printf("Binary = ");
  for(i = i-1;i>=0;i--){
    printf("%d", binary[i]);
  }
  return 0;
}