#include <stdio.h>
int main()
{
	int i, j, tot_rep, rep;
	char str;
	
	printf("�ݺ��� Ƚ�� �Է�: ");
	scanf("%d", &tot_rep);
	
	for(i=0; i<tot_rep; i++)
	{
		printf("���ڿ� Ƚ�� �Է�: ");
		scanf(" %c %d", &str, &rep);

		for(j=0; j<rep; j++)
		{
			printf(" %c", str);
		}
		printf("\n");
	} 
	return 0; 
	
}
