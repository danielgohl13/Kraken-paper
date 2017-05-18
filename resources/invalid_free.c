#include <stdio.h>
#include <stdlib.h>

int main(){

  int *A = malloc(10);
  int *B = malloc(10); 
  
  if(non_det_int()){
    B = A;             // Referência de B é perdida
  }
  
  free(A);  
  free(B);             // Pode acontece uma desalocação inválida

  return 0;
}
