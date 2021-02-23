#include <stdio.h>

void bhavesh(int,int);
void gorad(int);

int main() {
    int n=6;
    int m=7;
    int k;
    for( k = 0; k <= 2; k++ ) {
        bhavesh(n,m);
    }
    gorad(n);
    return(0);
}

void bhavesh(int n,int m){
    int i,j;
    for( i = 1; i <= n; i++ ) {
        for( j = 0; j < n-i; j++ ) {
            printf(" ");
        }
        if ( n == i ) {
             for( j = 1; j <= m; j++ ) {
                printf("*");
            }
        } else {
            for( j = 1; j <= 2*i-1; j++ ) {
                printf("*");
            }
        }
        printf("\n");
    }
}

void gorad(int n){
    int i,j;
    for( i = 1; i <= n; i++ ){
        for( j = 1; j <= n-1; j++ ) {
            printf(" ");
        }
         printf("***\n");
    }
}