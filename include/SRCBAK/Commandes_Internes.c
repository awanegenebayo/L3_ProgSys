#include "../include/Commandes_Internes.h"
#include <readline/readline.h>
#include <readline/history.h>


const int SIZE_LIST_COMMANDES_INTERNES = 8;
const char * const LIST_COMMANDES_INTERNES[] = { "echo",
												"date",
											 	"cd",
											 	"pwd",
											 	"history",
											 	"hostname",
											 	"kill",
											 	"exit" };




bool isInterne(char* cmd){
	bool ret = false;
	for(int i = 0 ; i < SIZE_LIST_COMMANDES_INTERNES ; i++)
		if(strcmp(cmd, LIST_COMMANDES_INTERNES[i])){
			ret = true; 
			break;
		}
}



int evaluer_expr_interne(char** arguments){

	if(strcmp(arguments[0], "history") == 0){//HISTORY

		HIST_ENTRY **hist_list;

		hist_list = history_list ();
	  	if (hist_list)
	    	for (int i = 0; hist_list[i]; i++)
	    		printf ("%d: %s\n", i + history_base, hist_list[i]->line);

	}
	else if(strcmp(arguments[0], "echo") == 0){//ECHO


	}	
	else if(strcmp(arguments[0], "date") == 0){//DATE


	}	
	else if(strcmp(arguments[0], "cd") == 0){//CD


	}	
	else if(strcmp(arguments[0], "pwd") == 0){//PWD


	}	
	else if(strcmp(arguments[0], "hostname") == 0){//HOSTNAME


	}	
	else if(strcmp(arguments[0], "kill") == 0){//KILL


	}	
	else if(strcmp(arguments[0], "exit") == 0){//EXIT


	}
}