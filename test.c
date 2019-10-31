#include<stdio.h>

int main()
{
   int loop_cnt, str_cnt, i, k;
   char str;
   
   printf("반복횟수 입력 : ");
   scanf("%d", &loop_cnt);
   
   i=0;
   
   while(i < loop_cnt)
   {
      printf("문자와 횟수 입력 : ");
      scanf("%c %d", &str, &str_cnt);
      
      k=0;
      
      while (k < str_cnt)
      {
         printf(" %c", str);
         k++;
      }
         
      i++;
   }
   
   return 0;
}
