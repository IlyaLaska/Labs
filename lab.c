#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#define EOL '\n'

struct nations {
  char name[15];
  int score;
  int pointsToCounntry[20];
};

struct nations country[n];

int workArray[20];

for(unsigned j = 0; j < n; ++j) {


for(unsigned i = 0; i < n; ++i) {
  workArray[i] = country[i].pointsToCounntry[0];
}

ALL THE WORK ON ARRAY //--//
SCORE += ...

}
















main() {
FILE * file;
file = fopen("eurovision.csv", "r");
/*/
get how many countries we have (read first line)-> n
struct countries country[n];
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