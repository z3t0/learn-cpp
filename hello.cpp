#include <iostream>


int main() {
  std::string name;

  // Get name
  std::cout << "Please enter your name: ";
               std::cin >> name;

  const std::string hello = "Hello, " + name + "!";


  // number of blanks surrounding the greeting
  const int pad = 0;

  // total number of rows to write
  const int rows = pad * 2 + 3;

  std::cout << std::endl;

  // write rows of output
  const std::string::size_type cols = hello.size() + pad * 2 + 2;

  for (int r = 0; r < rows; r++) {
    // write a row of output 
    std::string::size_type c = 0;
    while (c != cols) {
      // hello
      if (r == pad + 1 && c == pad + 1) {
        std::cout << hello;
        c += hello.size();
      } else {
        if (r == 0 || r == rows -1 || c == 0 || c == cols -1) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
        ++c;
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
