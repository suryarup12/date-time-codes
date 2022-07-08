#include <stdio.h>
#include <time.h>
 
int main(void)
{
    struct tm first = {.tm_mday=1};
    mktime(&first);
    printf("\n%s\n", asctime(&first));
}

