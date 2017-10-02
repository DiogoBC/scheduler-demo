#include <stdio.h>

int main() {
  int a[5];
  int n, nenhuma = 1;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    for (int j=0; j<5; j++){
    	if ((a[j] > 0) && ((i+1)%a[j] == 0)){
    		nenhuma = 0;
    		printf ("%d", j);    		
    	}
    }
    if (!nenhuma){
    	nenhuma = 1;
    	printf ("\n");
    }
    else {
    	printf ("-\n");
    }   
  }

  return 0;
}
