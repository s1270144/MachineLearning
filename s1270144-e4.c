#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int d1,d2,d3,total;
    char name[100];
    char* x[2] = {"Heads", "Tails"};

    srand(time(NULL));

    d1 = rand() % 2;
    d2 = rand() % 2;
    d3 = rand() % 2;
    total = d1 + d2 + d3;

    printf("Who are you?\n-> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);
    printf("Tossing a coin...\n");

    printf("Round 1: %s\n", x[d1]);
    printf("Round 2: %s\n", x[d2]);
    printf("Round 3: %s\n", x[d3]);
    printf("Heads: %d, Tails: %d\n", 3-total,total);

    if(3-total > 1)printf("%s won!\n",name);
    else printf("%s lost!\n",name);

    return 0;
}
