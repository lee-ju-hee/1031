#include<stdio.h>

int main()
{
   int loop_cnt, str_cnt, i, k;
   char str;
   
   printf("�ݺ�Ƚ�� �Է� : ");
   scanf("%d", &loop_cnt);
   
   i=0;
   
   while(i < loop_cnt)
   {
      printf("���ڿ� Ƚ�� �Է� : ");
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
