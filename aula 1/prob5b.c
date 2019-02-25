#include <stdio.h>
#include <string.h>

int main(int argc, char **argv, char **envp)
{
  for (char **env = envp; *env != NULL; env++)
  {
     if(!strncmp(*env, "USERNAME",8))
        printf("User: %s\n",*env+9);
  }
  return 0;
}   