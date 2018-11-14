#include <stdio.h>
#include <unistd.h>
#include <string.h>

char ** parse_args( char * line ) {
  char* retPtrs[];
  char *ptr = malloc(100 * sizeof(char *));
  
  char *command = line;
  char *programName = strsep( &command, " " );
  char *arguments = command;

  printf("%s\n", programName);
  printf("%s\n", arguments);

  return 0;
}

int main() {
  /* ... Testing strsep() ... */
  
  /* char line[100] = "woah-this-is-cool"; */
  /* char *s1 = line; */
  /* printf("%s\n", strsep( &s1, "-" )); */
  /* printf("%s\n", s1); */

  char line[100] = "ls -l --all --color";
  char ** args = parse_args(line);
  printf("%s", args[0]);
  printf("%s", args);
  execvp(args[0], args);
  
  
  return 0;
}
