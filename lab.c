#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#define EOL '\n'

struct country {
  char name[15];
  int score;
};

main() {
FILE * file;
file = fopen("eurovision.csv", "r");
/*/
get how many countries we have (read first line)-> n
struct country country[n];
while(file != EOF)
  read until comma -> x
    char value;
    while((value = getc(file)) != ',') {
          
    }
  strcpy(country[0].name, x);
  wile(file != EOL)
    read until comma -> y
    counrty[i].score += y;
  printf("%s\n", country[n].name);
  printf("%i\n", country[n].score);
//*/
fclose(file);
printf("%c", EOL);

}