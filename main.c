#include "my_mat.h"
#include<stdio.h>
int main()
{
char num='0';
int i=0,j=0;
int m[10][10]={0};
    while(num!='D')
{    scanf("%c",&num);

     switch(num)
{
    case 'A':
    for(int i=0;i<10;i++)
    {   int num_1=0;
        for(int j=0;j<10;j++)
        { 
           scanf("%d",&num_1);
           m[i][j]=num_1; 
        }
    }
            printf("finish\n");
            break;

    case 'B':
    scanf("%d%d",&i,&j);
    ifExist(i,j,m);
    printf("\n");
    break;
    case 'C':
    scanf("%d%d",&i,&j);
    printf("%d",fwa(i,j,m));
    printf("\n");
    break;
    

}
}
return 0;
}