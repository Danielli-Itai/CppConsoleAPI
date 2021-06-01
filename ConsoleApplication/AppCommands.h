#ifndef APP_COMMANDS_H
#define APP_COMMANDS_H




	// Include files.
	#include <string>
	#include <vector>





	//	Command tags.
	#define  CMD_PROMPED		"\n>"
	#define  CMD_ECHO			"echo"
	#define  CMD_EXIT			"exit"





	//	Application command functions.
	bool CommandEcho(std::vector<std::string> params);
	bool CommandExit(std::vector<std::string> params);
#endif