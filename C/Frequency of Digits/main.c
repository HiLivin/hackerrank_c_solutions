#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *arr, len;
    arr = (int*)calloc(10, sizeof(int));
    char *s = malloc(1000*sizeof(char));
    
    scanf("%s", s);
    s = realloc(s, strlen(s)+1);
    len = strlen(s);
    
    for(int i=0;i<len;++i){
        if(s[i]>='0' && s[i]<='9')
            ++arr[s[i]-'0'];
    }
    
    for(int i=0;i<10;++i)
        printf("%d ", arr[i]);
        
    return 0;
}
