#include <iostream>

int main() {
  std::string name;

  // Get name
  std::cout << "Please enter your name: ";
  std::cin >> name;

  const std::string hello = "* Hello, " + name + "! *";

  // Frame
  std::string frame1(hello.size(), '*');
  std::string spaces(hello.size()/2, ' ');
  std::string second= "* " + spaces + " *";

  std::cout << frame1 << std::endl;
  std::cout << second<< std::endl;
  std::cout << hello << std::endl;
  std::cout << second<< std::endl;
  std::cout << frame1 << std::endl;

  return 0;
}
