#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char ** parse_args( char * line ) {
  //char* retPtrs[];
  char **ptr = malloc(8 * sizeof(char *));
  
  //char *command = line;
  //char *programName = strsep( &command, " " );
  //char *arguments = command;

  ptr[0] = line;
  int ctr = 0;
  while (ptr[ctr++] = strsep(&line, " "));

  //printf("%s\n", programName);
    //printf("%s\n", arguments);

  return ptr;
}

int main() {
  /* ... Testing strsep() ... */
  
  /* char line[100] = "woah-this-is-cool"; */
  /* char *s1 = line; */
  /* printf("%s\n", strsep( &s1, "-" )); */
  /* printf("%s\n", s1); */

  char line[100] = "ls -l --all --color";
  char line2[128] = "ls -l -a";
  char ** args = parse_args(line2);
  // printf("%s\n", args[0]);
  //printf("%s\n", args[1]);
  //printf("%s\n", args[2]);
  //printf("%p\n", args);
  execvp(args[0], args);
  
  
  return 0;
}
