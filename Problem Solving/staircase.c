#include <stdio.h>
 
int main(){
 
    int n, rows, space, hash;
 
    scanf("%d", &n);
 
    for(rows = 1; rows <= n; rows++){
        for(space = (n - rows); space > 0; space--){
            printf(" "); 
        }
        for (hash = 1; hash < (rows + 1); hash++){   
            printf("#"); 
        }
 
        printf("\n");
    }
    return 0;
}