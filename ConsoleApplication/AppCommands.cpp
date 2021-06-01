/***
* Include files.
*/
#include "AppCommands.h"





/***
* Echo demonstrates a command execution function.
* the command prints the parameters it receives.
*/
bool CommandEcho(std::vector<std::string> params)
{
   for (auto it = params.begin(); it < params.end(); it++) {
      printf(it->c_str());
   }
   return(true);
}



/***
* Exit terminates the application.
* the command prints the exit messsage.
*/
bool CommandExit(std::vector<std::string> params)
{
   printf(CMD_EXIT);
   return(false);
}



