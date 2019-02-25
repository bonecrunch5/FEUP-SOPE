#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv, char **envp)
{
  setenv("USER_NAME", "Goncalo Fernandes Pereira", 1);
  printf("User: %s\n",getenv("USER_NAME"));
  
  return 0;
}   