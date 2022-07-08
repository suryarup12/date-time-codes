#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>
#include <stdio.h> 

int main(void)
{
    time_t result = time(NULL);
    printf("\n%s\n", ctime(&result));
#ifdef __STDC_LIB_EXT1__
    char time_str[26];
    ctime_s(time_str,sizeof time_str,&result);
    printf("\n%s\n", time_str);
#endif
}

