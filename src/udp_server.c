/*
 ============================================================================
 Name: udp_server.c
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 10, 2022
 Description : 
 ============================================================================
 */

#include "udp_server.h"

int communicate_server( unsigned short port_number)
{
	int socket_file_descriptor=0;
	char buffer[MAXLINES];
	char *hello_from_server="Hello from server";

	struct sockaddr_in server_address, client_address;

	//Creating a socket file descriptor
	socket_file_descriptor=socket(AF_INET,SOCK_DGRAM,0);

	if(socket_file_descriptor<0)
	{
		perror("Socket creation failed");
		exit(EXIT_FAILURE);
	}

	memset(&server_address, 0, sizeof(server_address));
	memset(&client_address,0, sizeof(client_address));

	//Filling server information
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=INADDR_ANY;
	server_address.sin_port=htons(port_number);

     //Bind the socket with the server address
	if(bind(socket_file_descriptor, (struct sockaddr *) &server_address, sizeof(server_address))<0)
	{
		perror("Bind failed.");
		exit(EXIT_FAILURE);
	}

	int number_of_bytes=0;
	int size_of_struct=0;

	size_of_struct=sizeof(client_address);

	number_of_bytes=recvfrom(socket_file_descriptor, (char  *) buffer, MAXLINES, MSG_WAITALL, (struct sockaddr *) &client_address, &size_of_struct);

	buffer[number_of_bytes]='\0';

#if DEBUG_LEVEL>=1
	printf("Client: %s \n", buffer);
#endif

	sendto(socket_file_descriptor, (char *) hello_from_server, strlen(hello_from_server), MSG_CONFIRM, (struct sockaddr *) &client_address, size_of_struct);

#if DEBUG_LEVEL >=1
	puts("Hello message sent.");
#endif

	 return EXIT_SUCCESS;
}
