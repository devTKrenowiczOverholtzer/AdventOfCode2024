// Day 1
#include <stdio.h>


// Function Declarations
void count_input_lines();
void print_challenge();
void print_Advent_Day();
void print_argument_info();



int main (int argc, char *argv[]){
print_Advent_Day();
print_challenge();
printf("Number of arguments: %d\n", argc);
for (int i = 0; i < argc; i++) {
  printf("Argument %d: %s\n", i, argv[i]);
}
count_input_lines();



            
return 0;
}

void print_Advent_Day(){
  printf("Day 1/n");
};

void print_challenge(){};
void count_input_lines(){};
void print_argument_info(){};
