#include<stdio.h>

main()
{
        char corf;

        printf("Convert from C or F?\n");
        scanf("%c", &corf);
        if (corf == 'f')
        {
                float fahr, celsius;

                printf("# to convert?\n");
                scanf("%f", &fahr);
                celsius = (5.0/9.0) * (fahr-32.0);
                printf("%.1f F = %.1f C\n", fahr, celsius);
        }
        else if (corf == 'c')
        {
                float fahr, celsius;

                printf("# to convert?\n");
                scanf("%f", &celsius);
                fahr = (celsius*9.0/5.0+32);
                printf("%.1f C = %.1f F\n", celsius, fahr);
        }
}
