#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int and_max=0, or_max=0, xor_max=0;
    
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
            if((i&j)<k && (i&j)>and_max)
                and_max=(i&j);
            if((i|j)<k && (i|j)>or_max)
                or_max=(i|j);
            if((i^j)<k && (i^j)>xor_max)
                xor_max=(i^j);    
        }
    }
    
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    
    return 0;
}
