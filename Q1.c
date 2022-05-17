#include <stdlib.h>

void func(char *str)
{
  char buf[1024];

  size_t len;
  char *firstslash = strchr(str, '/');

  if (!firstslash)
    strncpy(buf, str, 1023);  
    buf[1023] = 0;
  else
  {
    len = firstslash - str;    
    if (len > 1023)
      len = 1023;

    strncpy(buf, str, len-1);   
				  
    buf[len] = 0;
  }
}
