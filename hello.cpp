#include <iostream>


int main() {
  std::string name;
  unsigned int padRow;
  unsigned int padColumn;

  // Get name
  std::cout << "Please enter your name: ";
  std::cin >> name;

  // get Padding
  std::cout << "Please enter the row padding: ";
  std::cin >> padRow;

  std::cout << "Please enter the column padding: ";
  std::cin >> padColumn;

  const std::string hello = "Hello, " + name + "!";


  // total number of rows to write
  const unsigned int rows = padRow * 2 + 3;

  std::cout << std::endl;

  // write rows of output
  const std::string::size_type cols = hello.size() + padColumn * 2 + 2;

  for (unsigned int r = 0; r < rows; r++) {
    // write a row of output
    std::string::size_type c = 0;
    while (c != cols) {
      // hello
      if (r == padRow + 1 && c == padColumn + 1) {
        std::cout << hello;
        c += hello.size();
      } else {
        if (r == 0 || r == rows -1 || c == 0 || c == cols -1) {
          std::cout << "*";
          ++c;
        } else {
          if (r == padRow + 1) {
            // if hello row
            std::cout << " ";
            ++c;
          }

          else {
            // If padding line
            std::string::size_type space_size = cols - padColumn;
            std::string spaces(space_size, ' ');
            std::cout << spaces;

            c += spaces.size();
          }
        }
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
