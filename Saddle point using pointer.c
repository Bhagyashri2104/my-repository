#include <stdio.h>

int main()
{
   int a[3][3],b[3][3],c[3][3],d[3][3],s[2][2],min,max,choice;
   int *q,*r,*t,*p;
   int i,j,k;
   p = &a[0][0];
   q = &b[0][0];
   r = &c[0][0];
   t = &d[0][0];
   
   
   printf("Enter your choice\n");
   printf("1.Additon\n2.multiplication\n3.Saddle point\n");
   scanf("%d", &choice);
   
   
   
   printf("Enter the elements of an array a:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",(p+(i*3)+j));
       }
   }
   
  
    switch(choice)
   {
    case 1:
    printf("Enter the elements of an array b:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",(q+(i*3)+j));
       }
   }
   
   printf("Addition of two array is:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           c[i][j] = *(p+(i*3)+j) + *(q+(i*3)+j);
       }
   }
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d\t",c[i][j]);
       }printf("\n");
   }
      break;
    
    
    case 2:  
    printf("Enter the elements of an array b:\n");
    for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",(q+(i*3)+j));
       }
   }
   
    printf("Multiplication of two array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            {  d[i][j] = 0;
                for(k=0;k<3;k++)
                {
                     d[i][j] = d[i][j] + (*(p+(i*3)+k) * *(q+(k*3)+j));
                }
             } 
         } 
    }
     
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d\t", d[i][j]);
         }   
         printf("\n");
     }
      break;
      
      
      case 3:
        for(i=0;i<3;i++)
       {
         min=*(p+(i*3)+0);
         for(j=0;j<3;j++)
       {
           if(min>=*(p+(i*3)+0))
           {
               min=*(p+(i*3)+j);
               s[0][0]=i;
               s[0][1]=j;
           }
       }
       
       j=s[0][1];
       max=*(p+(0*3)+j);
       for(int k=0;k<3;k++)
       {
           if(max<=*(p+(k*3)+j))
           {
               max=*(p+(k*3)+j);
               s[1][0]=k;
               s[1][1]=j;
           }
       }
       
       if(min==max)
       {
       
           if (s[0][0]==s[1][0] && s[0][1]==s[1][1]);
           {
               printf("The saddle point is %d which is at a[%d][%d]",*(p+(i*3)+j),s[0][0],s[0][1]);
           }
       }
       
       break;
     } 
   }
     return 0;
}
