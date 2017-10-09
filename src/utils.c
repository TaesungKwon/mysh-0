#include "utils.h"
#include "string.h"
#include "stdlib.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char* token = NULL;
	char cm[] = "";
	char cp[] = " \t\n";
	char *arrs[] = {"","","","","","","","","","","","","","","","","","","","","","","","","","",""};
	char *p = arrs[0];
	char **q = &p;
	int i=0;
	
	strcpy(cm,command);

	
	token = strtok(cm,cp);


	while( token != NULL)
	{
		strcpy(p+i,token);
		i++;
		token = strtok(NULL,cp);
		
	}
	*argc = i;
	
	argv = &q;
}
