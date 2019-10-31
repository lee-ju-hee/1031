#include <stdio.h>
int main()
{
	long fact=1;
	int n, i;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	
	for(i=n; i>=1; i--)
	{
		//printf("i=%d, fact=%d \n", i, fact);
		fact=fact*i;
		printf("%d * ", i);
	}
	
	printf("\b\b = %d", fact);
	
	return 0;
}
