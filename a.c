#include <stdio.h>

int main()
{
	int i, j;

	printf("<!DOCTYPE html>\n");
	printf("<meta chraset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<h1>99</h1>\n");

	printf("<table>\n");
	for(i = 0; i < 10; ++i)
	{
		printf("<tr>\n");
		for(j = 0; j < 10; ++j)
		{
			if(j == 0)
			{
				if( i == 0)
				{
					printf("<th>\n");
				}
				else if(i != 0)
				{
					printf("<th>%d\n",i);
				}
			}
			else if( i == 0)
			{
				printf("<th>%d\n", j);
			}
			else if( j * i == 0)
			{
				printf("<th>%d\n", j);
			}
			else
			{
				printf("<td>%d\n", j * i);
			}
		}
	}
	return 0;
}
