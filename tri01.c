#include <stdio.h>
int main()
{
	int i, j, n, k;
	
	printf("»ï°¢Çü ±æÀÌ: ");
	scanf("%d", &n); 
	
	for(i=n; i>=0; i--)
	{
		for(j=1; j<=n; j++)
		{
			printf(" ");
		}
		for(k=j; k<=n+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	
}
