#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "output.h"

void printMatrix(char **tab,int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
            printf("%c ",tab[i][j]);
    }
        
}

void printVisited(int **tab,int n)
{
     printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<n;j++)
            printf("%d ",tab[i][j]);
    }
        
}

void printConnection(double **con,int n)
{
    int size=n*n;
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(con[i][j]!=0)
            {
                printf("(%d,%d) = %lf\n",i,j,con[i][j]);
            }
}

void freeMemory(char **tab,int **visited,double **con,int n)
{
    for (int i = 0; i < n; i++)
    {
        free(tab[i]);
        free(visited[i]);
    }
    for(int i=0;i<n*n;i++)
    {
        free(con[i]);
    }
        
    free(tab);
    free(visited);
    free(con);
}