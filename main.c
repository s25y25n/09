#include <stdio.h>
#include <stdlib.h>
#define SIZE  5

int main(int argc, char *argv[])
{
    int i, average ;
    int grade[SIZE];
    printf("5���� ������ �Է��ϼ��� : \n");
    
    int sum = 0;
    for(i=0;i<SIZE;i++) {
        scanf("%d", &grade[i]);
        sum += grade[i];
        }
        
    average = sum / SIZE;
    printf("���� ��� : %d \n", average);



  
  system("PAUSE");	
  return 0;
}
