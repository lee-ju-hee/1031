#include <stdio.h>
int main()
{
	int i, j, tot_rep, rep;
	char str;
	
	printf("반복할 횟수 입력: ");
	scanf("%d", &tot_rep);
	
	i=0;
	
	while(i<tot_rep)
	{
		printf("문자와 횟수 입력: ");
		scanf(" %c %d", &str, &rep);
		
		j=0;
		while(j<rep)
		{
			printf(" %c", str);
			j++;
		}
		printf("\n");
		i++;
	} 
	return 0; 
	
}
