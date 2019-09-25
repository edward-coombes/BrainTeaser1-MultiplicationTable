#include <stdio.h>

int main(){
    int i, j;
    printf("       ");
    for(j = 1; j<= 12;j++)
        printf("  %3d  ", j);
    printf("\n");
    for(j = 1; j <= 12; j++){
        printf("  %3d  ", j);
        for(i = 1; i <= 12; i++){
            printf("  %3d  ",i * j);
        }
        printf("\n");
    }
}
