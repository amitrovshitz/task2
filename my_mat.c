#include <stdio.h>
int min(int a,int b)
{   
    if(a>b)
    return b;
    return a;
}
int fwa(int i,int j,int m[10][10])
{  const int INT_MAX=2147483647;
  int t1[10][10]={0};
  int num=0; 
  for(int d=0;d<10;d++)
  {
    for(int e=0;e<10;e++)
    {
      if((m[d][e]==0)&&(d!=e))
      {
        m[d][e]=INT_MAX;
      }
    }
  }                   
  for(int a=0;a<10;a++)             
  {
    for(int b=0;b<10;b++)
    {   
       for(int c=0;c<10;c++)
       {
        
        if((a%2)==0)
        {
         if((b==a)||(c==a)||(b==c))
         {
         t1[b][c]=m[b][c];
         }
         else
         { 
          if ((m[b][a]!=INT_MAX)&&(m[a][c]!=INT_MAX))
         {
            num=m[b][a]+m[a][c];
         }
         else
         {
            num=INT_MAX;
         }
         t1[b][c]=min(num,m[b][c]); 
         }
       }
       else
       {
          if((b==a)||(c==a)||(b==c))
         {
         m[b][c]=t1[b][c];
         }
         else
         {
        if ((t1[b][a]!=INT_MAX)&&(t1[a][c]!=INT_MAX))
         {
            num=t1[b][a]+t1[a][c];
         }
         else
         {
            num=INT_MAX;
         }
         m[b][c]=min(num,t1[b][c]); 
         }
       }
       }
    }
       
  } 
    if((m[i][j]==INT_MAX)||(m[i][j]==0))
    {
      return -1;
    }
    return m[i][j];
   
}
void ifExist(int i,int j,int m[10][10])
{ int num=fwa(i,j,m);
  if(num==(-1))
  {
    printf("False");
  }
  else
  {
    printf("True");
  }
}
