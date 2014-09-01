#include <time.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
     struct tm tm;

     memset(&tm, 0, sizeof(tm));
     tm.tm_year = -1;
     tm.tm_mon = -1;
     tm.tm_mday = -1;
     tm.tm_isdst = -1;
     tm.tm_hour = -1;
     tm.tm_min = -1;
     tm.tm_sec = -1;

     printf("Working...\n");
     time_t temp_time = mktime(&tm);
     printf("Worked");
}
