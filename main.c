#include <stdio.h>
#include <stdlib.h>
#define SIZE  5

int main(int argc, char *argv[])
{
    int i; 
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {1,2,3,4,5};
    int flag = 0;
    
    for(i=0;i<SIZE;i++)
    if (a[i] != b[i])
    {
             printf("array a and b are not the same");
             flag = 1;
             }
    if(flag == 0 ) 
         printf("array a and b are the same ");
         
  
   
  
  system("PAUSE");	
  return 0;
}
