#include <stdio.h>
int main()
{
	int i, j, tot_rep, rep;
	char str;
	
	printf("�ݺ��� Ƚ�� �Է�: ");
	scanf("%d", &tot_rep);
	
	i=0;
	
	while(i<tot_rep)
	{
		printf("���ڿ� Ƚ�� �Է�: ");
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
