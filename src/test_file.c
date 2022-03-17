/*
 ============================================================================
 Name: test_file.c
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */

#include "test_file.h"

void test_read_from_file_to_string()
{
	read_from_file_to_string(SAMPLE_JSON_FILE);
}

void test_print_json_string()
{
	char *this_string=read_from_file_to_string(SAMPLE_JSON_FILE);
	print_json_string(this_string);
}

void test_print_json_file()
{
	print_json_file(SAMPLE_JSON_FILE);
}

void test_generate_random_number()
{
	generate_random_number(0, 10);
}

void test_pick_filename_by_random_id()
{
	int random_number=0;
	random_number=generate_random_number(1,5 );

	char *file_name=NULL;
	file_name=pick_filename_by_random_id(SAMPLE_JSON_FILES_PREFIX_WITH_PATH,random_number,".txt");

	printf("%s \t ---> %s()\n",__FILE__,__func__);
	printf("\n%s. \n",file_name);
}

void test_me()
{
	//test_read_from_file_to_string();
	//test_print_json_string()
	//test_print_json_file();
	//test_generate_random_number();
	//test_pick_filename_by_random_id();
}
