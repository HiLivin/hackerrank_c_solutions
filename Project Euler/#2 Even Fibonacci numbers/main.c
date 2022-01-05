#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        
        long sum = 0;
        long a1 = 0;
        long a2 = 2;
        long tmp;
        
        for(long i = 1; i < n; ++i){
            tmp = 4 * a1 + a2;
            if(tmp>n)
                break;
                
            a2 = a1;
            a1 = tmp;
            sum += tmp;
        }
        
        printf("%ld\n", sum);
    }
    return 0;
}