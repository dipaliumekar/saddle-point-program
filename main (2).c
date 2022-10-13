/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3],s[2][2],min,max,i,j,k;
    int *p=&a[0][0];
    printf("Enter array elements of first  array :\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(p+(i*3)+j));
        }
    }
    for(i=0;i<2;i++)
    {
        min=a[i][0];
       for(j=0;j<2;j++)  
      {
          if(min>=a[i][0])
          {
              min = a[i][j];
              s[0][0]=i;
              s[0][1]=j;
          }
          j = s[0][1];
          max = a[0][j];
          for(k=0;k<3;k++) 
          {
              if(max<=a[k][j])
              {
                  max = a[k][j];
                   s[1][0]=k;
                   s[1][1]=j;
              }
              if(min==max)
              {
                  if(s[0][0]==s[1][0]&&s[0][1]==s[1][1])
                  {
                      printf("\n%d is  the saddle point and it is at position  %d %d",a[i][j],i,j);
                  }
              }
          }
     }
        
   

    return 0;
  }
}

