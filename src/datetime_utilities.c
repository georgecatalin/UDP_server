/*
 ============================================================================
 Name: datetime_utilities.c
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */

#include "datetime_utilities.h"

char *get_date_in_standard_format()
{
	//to obtain the calendaristic date in the format '2022-01-28 13:27:33'
	static char formatted_date[30];

	time_t current_time;
	struct tm *time_info;

	time(&current_time);
	time_info=localtime(&current_time);

	sprintf(formatted_date,"%d-%02d-%02d %02d:%02d:%02d",time_info->tm_year+1900,time_info->tm_mon+1,time_info->tm_mday,time_info->tm_hour,time_info->tm_min,time_info->tm_sec);

#if DEBUG_LEVEL >=2
	printf("The formatted CURRENT DATE -------------------> %s  .\n",formatted_date);
#endif
	return formatted_date;

}

time_t get_current_time_in_epoch_format()
{
	static time_t time_epoch;
	time_epoch=time(NULL);

#if DEBUG_LEVEL >=2
	printf("The time now in Unix epoch format (seconds since 1970 Jan 1st is : \t %lu.\n",time_epoch);
#endif

	return time_epoch;

}

void modify_system_time_version_1(char *new_time)
{
#if DEBUG_LEVEL >=2
	puts("I am setting the time now");
#endif

   int result_operation=execl("/bin/date","/bin/date", "-s", new_time,NULL);
}


