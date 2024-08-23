#include <iostream>

// --- Main Function ---
int main() {

  return 0;
}

//  --- Input / Output ---
int print_int() {
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;
  std::cout << "You entered: " << number << std::endl;
}

//  --- Variables ---
int x;
float y;
double z;
char c;
bool b;

//  --- Control Structure ---
int control_structure() {
  if (true) {
    // Execute if condition is true
  } else {
    // Execute if condition is false
  }

  while (true) {
    // Execute while condition is true
  }

  for (int i = 0; i < 1; i++) {
    // Execute while condition is true
  }

  int condition_number = 0;
  switch (condition_number) {
    case 0:
      // Execute code when condition_number is 0;
      break;
    case 1:
      // Execute code when condition_number is 1;
      break;
    case 2:
      // Execute code when condition_number is 2;
      break;
    default:
      // Execute code when conditon_number doesn't match any case
      break;
  }
}

//  --- Functions ---
int returns_a_int(int my_int) {
  return my_int;
}