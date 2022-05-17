#include <stdio.h>
#include <ctype.h>
#include <string.h>
void func()
{
char buffer[1024];
	  printf("Please enter your user id :");
	  fgets(buffer, 1024, stdin);
	
	  if (!isalpha(buffer[0]))
	  {
	    char errormsg[1044];
	
	    strncpy(errormsg, buffer, 1024);         
	    strcat(errormsg, " is not a valid ID");  
	    throw errormsg;
	  }
	
	}
	main()
	{
	  try
	  {
           func();
	  }
	  catch(char * message)
	  {
	    fprintf(stderr, message);               
	  }
	}
