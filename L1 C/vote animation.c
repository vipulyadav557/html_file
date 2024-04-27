#include <stdio.h>
int main() 
{
    int i;
    for(i=0; i<5; i++)
     {
        printf("Vote!\n");
        fflush(stdout);
        sleep(1);
        printf("\b");
        fflush(stdout);
        sleep(1);
    }
    return 0;
}