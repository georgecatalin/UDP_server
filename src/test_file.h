/*
 ============================================================================
 Name: test_file.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */
#ifndef TEST_FILE_H_
#define TEST_FILE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include "macro_definitions.h"
#include "data_containers.h"
#include "file_utilities.h"
#include "datetime_utilities.h"
#include "process_json.h"
#include "udp_server.h"


void test_me();

void test_read_from_file_to_string();
void test_print_json_string();
void test_print_json_file();
void test_generate_random_number();
void test_pick_filename_by_random_id();

#endif /* TEST_FILE_H_ */
