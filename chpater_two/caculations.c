// Program 2.4 Simple calculations
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int total_pets;
  int cats;
  int dogs;
  int ponies;
  int others;

  // Set the number of each kind of pet
  cats = 2;
  dogs = 1;
  ponies = 1;
  others = 46;

  // Caculate the total number of pets
  total_pets = cats + dogs + ponies + others;

  printf("We have %d pets in total\n", total_pets );
  return 0;
}
