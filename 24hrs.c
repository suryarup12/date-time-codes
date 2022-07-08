#define _POSIX_C_SOURCE 200112L 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    //setenv("TZ", "/usr/share/zoneinfo/Asia/Calcutta", 1);   
    putenv("/usr/share/zoneinfo/Asia/Calcutta=TZ"); 
    struct tm tm = *localtime(&(time_t){time(NULL)});
    printf("\nToday is :          %s", asctime(&tm));
    printf("(DST is %s)\n", tm.tm_isdst ? "in effect" : "not in effect");
    tm.tm_mon -= 24;  
    mktime(&tm);       
    printf("\n24 months ago the date was : %s", asctime(&tm));
    printf("(DST was %s)\n\n", tm.tm_isdst ? "in effect" : "not in effect");
}

