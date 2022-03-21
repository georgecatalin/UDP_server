/*
 ============================================================================
 Name        : sample_udp_server.c
 Author      : George Calin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "udp_server.h"
#include  "macro_definitions.h"
#include "test_file.h"

int main(int argc, char **argv)
{
	test_me();

	/*
	unsigned short port_number;

	if(argc!=2)
	{
		printf("The usage of the server application is : \t >> %s <port number> \n",argv[0]);
		exit(EXIT_FAILURE);
	}

	port_number=atoi(argv[1]);

	communicate_server(port_number);
	*/

	return EXIT_SUCCESS;
}
