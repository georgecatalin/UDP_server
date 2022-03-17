/*
 ============================================================================
 Name: process_json.c
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */

#include "process_json.h"


char *read_from_file_to_string(char *file_with_complete_path)
{
	static char this_string[MAXLINES];

	FILE *pFile;
	pFile=fopen(file_with_complete_path,"r");

	if(!pFile)
	{
		perror("Error when opening file to read into a string");
		exit(EXIT_FAILURE);
	}
	else
	{
		int i=0;
		while(!feof(pFile))
		{
			this_string[i]=fgetc(pFile);
			i++;
		}

		this_string[i]='\0';
	}

#if DEBUG_LEVEL >=3
	printf("%s \t ---> %s \n",__FILE__,__func__);
	printf("I read the file %s into this string \t ----->\n %s.\n", file_with_complete_path, this_string);
#endif

	return this_string;
}

char *enter_JSON_from_keyboard()
{
	static char get_input[MAXLINES];

	printf("Enter what you wish to transmit: \n");
	fgets(get_input, sizeof(get_input), stdin);

	return get_input;
}

void print_json_file(char *filename_with_path)
{
	char *this_string=NULL;
	this_string=read_from_file_to_string(filename_with_path);

	printf("%s \t ---> %s()\n",__FILE__,__func__);
	print_json_string(this_string);

	return;
}

void print_json_string(char *this_string)
{
	cJSON *json_object=cJSON_Parse(this_string);
	char *printable_string=cJSON_Print(json_object);

	printf("%s \t ---> %s()\n",__FILE__,__func__);
	printf("\n%s. \n",printable_string);

	cJSON_Delete(json_object);
}
