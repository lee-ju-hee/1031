#include <stdio.h>
int main()
{
	int i=1, hap=0, num;
	
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		hap+=i;
		i++;
	}
	
	printf("1부터 %d까지의 합 = %d입니다.", num, hap);
}
