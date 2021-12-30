#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return a>b?a:b;
}

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(int i=0;i<2*n-1;++i){
          for(int j=0;j<2*n-1;++j){
              printf("%d ", max(abs(n-1-i), abs(n-1-j))+1);
          }
          printf("\n");
      }
    
    return 0;
}
