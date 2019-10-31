#include <stdio.h>
int main()
{
	int i, j, tot_rep, rep;
	char str;
	
	printf("반복할 횟수 입력: ");
	scanf("%d", &tot_rep);
	
	for(i=0; i<tot_rep; i++)
	{
		printf("문자와 횟수 입력: ");
		scanf(" %c %d", &str, &rep);

		for(j=0; j<rep; j++)
		{
			printf(" %c", str);
		}
		printf("\n");
	} 
	return 0; 
	
}
