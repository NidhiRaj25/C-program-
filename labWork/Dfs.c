#include<stdio.h>
void DFS(int);
int g[20][20],visited[2],n;
int main()
{
    int i,j;
    printf("Enter the no of vertices:");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:");
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       scanf("%d",&g[i][j]);
    for (i=0;i<n;i++)  
       visited[i]=0 ;
    DFS(O);

}

void DFS(int v)
{
    int i;
    printf("\n %d",)
}