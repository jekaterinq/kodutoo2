#include <stdio.h>
//#include <string.h>

#define MAX 15

int main()
{
    //float time;
    //int speed = 5;
    int num;

    do
    {
        printf("Sisesta kui palju teed meil on (MAX 15)?");
        scanf("%d", &num);
        if(num > MAX)
        {
            printf("(MAX 15!!!) Sisesta kui palju teed meil on?");
            scanf("%d", &num);
        }
    }
    while (num > MAX);

    char *roads[num];
    double lenght[num];

    int i;

    for (i = 0; i < num; i++)
    {
        printf("Milline %d. teed nimetatud ja kui palju km see on?\n", i + 1);
        scanf("%s", roads[i]);
        scanf("%lf", &lenght[i]);
    }

    for (i = 0; i < num; i++)
    {
        printf("%s ", roads[i]);
        printf("%lf km\n", lenght[i]);
    }


    return 0;
}
