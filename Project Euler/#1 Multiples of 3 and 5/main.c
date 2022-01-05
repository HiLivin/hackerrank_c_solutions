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
        int n; 
        scanf("%d",&n);
        
        long int threes = (n - 1) / 3;
        threes = 3 * threes * (threes + 1);
        
        long int fives = (n - 1) / 5;
        fives = 5 * fives * (fives + 1);
        
        long int fifteens = (n -1 ) / 15;
        fifteens = 15 * fifteens * (fifteens + 1);
        
        long int sum = threes / 2
                  + fives / 2
                  - fifteens / 2;
        
        printf("%ld\n", sum);
    }
    
    
    return 0;
}