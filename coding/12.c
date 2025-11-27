#include <stdio.h>
void main(){
    int bilangan [4][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           bilangan[i][j]= i+j;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 2; j++)
        {
            printf("%i ", bilangan[i][j]);
        printf("\n");
        }
        
    }
    
}