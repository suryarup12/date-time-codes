#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t epoch = 0;
    printf("\n%ld seconds since the epoch began\n", (long)epoch);
    printf("%s\n", asctime(gmtime(&epoch)));
}

