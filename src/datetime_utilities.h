/*
 ============================================================================
 Name: datetime_utilities.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */
#ifndef DATETIME_UTILITIES_H_
#define DATETIME_UTILITIES_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include "macro_definitions.h"

char *get_date_in_standard_format(); //to obtain the calendaristic date in the format '2022-01-28 13:27:33'
time_t get_current_time_in_epoch_format(); //unix epoch format, number of seconds since Jan 1st, 1970

void modify_system_time_version_1(char *new_time);
int generate_random_number(int minimum, int maximum);


#endif /* DATETIME_UTILITIES_H_ */
