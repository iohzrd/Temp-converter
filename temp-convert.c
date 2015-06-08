#include<stdio.h>

int main()
{
	char corf;
	float fahr, celsius;

	printf("Convert from C or F?\n");
	scanf("%c", &corf);
	if (corf == 'f' || corf == 'F')
	{
		printf("# to convert?\n");
		scanf("%f", &fahr);
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%.1f F = %.1f C\n", fahr, celsius);
	}
	else if (corf == 'c' || corf == 'C')
	{
		printf("# to convert?\n");
                scanf("%f", &celsius);
                fahr = (celsius*1.8) + 32.0;
                printf("%.1f C = %.1f F\n", celsius, fahr);
	}
	return 0;
}
