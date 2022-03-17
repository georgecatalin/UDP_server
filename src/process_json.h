/*
 ============================================================================
 Name: process_json.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */
#ifndef PROCESS_JSON_H_
#define PROCESS_JSON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdbool.h>
#include "cJSON.h"
#include "macro_definitions.h"

char *read_from_file_to_string(char *file_with_complete_path);
char *enter_JSON_from_keyboard();

void print_json_file(char *file_with_complete_path);
void print_json_string(char *this_string);



#endif /* PROCESS_JSON_H_ */
