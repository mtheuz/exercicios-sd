#include <stdio.h>


int main(void) {
  int arr[] = {8,7,9,2,1};
  int *ptr = arr;

  int maior_valor = arr[0];
  for(int i = 0; i < 5; i++){
    if(arr[i] > maior_valor){
      maior_valor = arr[i];
      };
  }
  printf("%d ", maior_valor);

  
};
