#include <iostream>

int main() {
  std::string name;

  // Get name
  std::cout << "Please enter your name: ";
  std::cin >> name;

  // Say hellp
  std::cout << "Hello " << name << "!"  << std::endl;

  return 0;
}
