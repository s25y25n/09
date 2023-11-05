#include <stdio.h>
#include <stdlib.h>
#define SIZE  5

int main(int argc, char *argv[])
{
    int i, average ;
    int grade[SIZE];
    printf("5명의 점수를 입력하세요 : \n");
    
    int sum = 0;
    for(i=0;i<SIZE;i++) {
        scanf("%d", &grade[i]);
        sum += grade[i];
        }
        
    average = sum / SIZE;
    printf("점수 평균 : %d \n", average);



  
  system("PAUSE");	
  return 0;
}
