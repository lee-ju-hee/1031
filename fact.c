#include <stdio.h>
int main()
{
	long fact=1;
	int n, i;
	
	printf("������ �Է��Ͻÿ�: ");
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
