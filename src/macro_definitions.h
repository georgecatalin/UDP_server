/*
 ============================================================================
 Name: macro_definitions.h
 Author: George Calin
 Email: george.calin@gmail.com
 Created on: Mar 10, 2022
 ============================================================================
 */

/*  *************************************************************************************
 * 	VERSION HISTORY
 * 0.1 read the JSON from a file that sits on the hard drive
 * 0.2 read the JSON from file randomly selected from the ones sitting in a defined folder
 *
 *
 *
 *
 *
 *  ************************************************************************************* */
#ifndef MACRO_DEFINITIONS_H_
#define MACRO_DEFINITIONS_H_

//version number
#define APPLICATION_VERSION 0.2

//communication & network stuff
#define MAXLINES 1024

//debug control
#define DEBUG_LEVEL 2

//path information
#define SAMPLE_JSON_FILE "/home/georgeca/my_sandbox/kls_udp_server/src/json_files/json_1.txt"
#define SAMPLE_JSON_FILES_PREFIX_WITH_PATH  "/home/georgeca/my_sandbox/kls_udp_server/src/json_files/json_"

#endif /* MACRO_DEFINITIONS_H_ */
