/*
 ============================================================================
 Name: process_files.c
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 17, 2022
 Description : 
 ============================================================================
 */

#include "file_utilities.h"


bool verify_if_file_exists(char *file_with_complete_path)
{
	FILE *pFile;
		pFile=fopen(file_with_complete_path,"r");

		if(pFile)
		{
			fclose(pFile);

	#if DEBUG_LEVEL >=2
			printf("The file \t %s \t exists.\n", file_with_complete_path);
	#endif

			return true;
		}
		else
		{

	#if DEBUG_LEVEL>=2
			printf("The file \t %s \t does NOT exist.\n", file_with_complete_path);
	#endif

			return false;
		}
}


bool create_a_new_file(char *file_with_complete_path)
{
	FILE *pFile;

	pFile=fopen(file_with_complete_path,"w");

	if(pFile)
	{
#if DEBUG_LEVEL >=2
		printf("The file \t %s \t was created successfully.\n", file_with_complete_path);
#endif

		fclose(pFile);
		return true;
	}
	else
	{
#if DEBUG_LEVEL >=2
		printf("There was an error during the creation of the new file \t %s \t . \n", file_with_complete_path);
#endif

		return false;
	}
}

	bool delete_a_file(char *file_with_complete_path)
	{
		int successful_deletion=remove(file_with_complete_path);

		if(successful_deletion==0)
		{
#if DEBUG_LEVEL >=2
			printf("File \t %s \t deleted successfully . \n", file_with_complete_path);
#endif

			return true;
		}
		else
		{
#if DEBUG_LEVEL >=2
			printf("There was an error during the deletion of the file \t %s \t . \n", file_with_complete_path);
#endif

			return false;
			}
	}

char *add_complete_path_to_file_name(char *filename, char *file_extension, char *path_to_file)
{
	static char file_with_complete_path[100];
	strcpy(file_with_complete_path,path_to_file);

	strcat(file_with_complete_path,filename);
	strcat(file_with_complete_path,file_extension);

#if DEBUG_LEVEL >=2
	printf("The filename constructed with the complete path is %s. \n", file_with_complete_path);
#endif

	return file_with_complete_path;

}

bool write_header_in_file(char *file_with_complete_path, char *content_to_write)
{
	FILE *pFile;

	pFile=fopen(file_with_complete_path,"w");

	if(!pFile)
	{
		perror("Error when opening file in w mode");
		printf("There was an error when opening the file %s  in 'w' mode ", file_with_complete_path);
		return false;
	}
	else
	{
		fprintf(pFile,"%s  \n",content_to_write);
		fclose(pFile);

#if DEBUG_LEVEL >=2
		printf("The header %s was inserted successfully in the file %s.\n",content_to_write, file_with_complete_path);
#endif
		return true;
	}
}
