/*
 ============================================================================
 Name: process_files.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */
#ifndef FILE_UTILITIES_H_
#define FILE_UTILITIES_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include "macro_definitions.h"

bool verify_if_file_exists(char *file_with_complete_path);
bool create_a_new_file(char *file_with_complete_path);
bool delete_a_file(char *file_with_complete_path);

char *add_complete_path_to_file_name(char *filename, char *file_extension,char *path_to_file);
bool write_header_in_file(char *file_with_complete_path, char *content_to_write);

char *pick_filename_by_random_id(char *prefix_filename,int random_number,char *file_extension);


#endif /* FILE_UTILITIES_H_ */
