#include <stdio.h>
#include <conio.h>

int main()
{
	int s, i, j, rows, n = 1;
	/*i,j=loop   
s=space
n=number
*/
	printf("Enter rows: ");
	scanf("%d", &rows);
	s = rows / 2;
	for (i = 1; i <= rows / 2; i++) //outer loop
	{
		n = i;
		for (j = 1; j <= s; j++) //loop for space
		{
			printf(" ");
		}
		s--;
		for (j = 1; j <= i; j++) //loop to display number on (left increment)
		{
			printf("%d", n);
			n++;
		}
		n = n - 2;
		for (j = 1; j < i; j++) //loop to display number (right Decrement)
		{
			printf("%d", n);
			n--;
		}
		printf("\n");
	}
	//first half loop close
	for (i = rows / 2; i >= 1; i--)
	{
		for (j = 1; j <= s; j++)
		{
			printf(" ");
		}
		s++;
		for (j = 1; j <= i; j++)
		{
			printf("%d", n);
			n--;
		}
		for (j = 1; j < i; j++)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
	}

	//for outer
	return 0;
}

//second half loop close
