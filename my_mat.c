#include <stdio.h>
#include <math.h>
#include "my_mat.h"


int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

void function1(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        scanf("%d",&A[i][j]);
        }
    }
    FloydWarshall();
    
}
void function2(int i, int j){
if(A[i][j]!=0){
    printf("True\n");
}
    else{
    printf("False\n");
    }
}
void function3(int i, int j){
if(A[i][j]!=0){
    printf("%d\n",A[i][j]);
}
    else{
    printf("%d\n",-1);
    }    
}
void FloydWarshall(){
    for (int  k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if(i==j||j==k||i==k){
                    continue;
                }
                else if(A[i][k]==0||A[k][j]==0){ //infinity
                    continue;
                }
                else if(A[i][j]==0){
                    A[i][j]=A[i][k]+A[k][j];
                }
                else{
                A[i][j]= min(A[i][j],(A[i][k]+A[k][j]));    
                }
            }    
            
        }
        
    }
    
}
