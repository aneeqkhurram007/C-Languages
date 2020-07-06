#include <stdio.h>
#include <math.h>

int main()
{
	int name, score, total, uni, inputs;
	float per;

	do
	{
		inputs = scanf("%d %d", &score, &total);
		per = score * 100 / total;
		if (inputs == EOF)
		{
			break;
		}

		if (per >= 90)
			printf("Excellent");

		else if (per >= 80 && per <= 89)
			printf("Well Done");

		else if (per >= 70 && per <= 79)
			printf("Good");

		else if (per >= 60 && per <= 69)
			printf("Need Improvement");

		else
			printf("Fail");

		printf(" %.5f", per);
	} while (inputs != EOF);

	return 0;
}
