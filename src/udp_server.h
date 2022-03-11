/*
 ============================================================================
 Name: udp_server.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 10, 2022
 Description : 
 ============================================================================
 */
#ifndef UDP_SERVER_H_
#define UDP_SERVER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "macro_definitions.h"
#include "cJSON.h"

int communicate_server(unsigned  short port_number);

#endif /* UDP_SERVER_H_ */
