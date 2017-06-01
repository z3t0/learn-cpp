#include <iostream>

int main() {int option = -1;

  while (1) {
    std::cout << "Which shape would you like to draw?" << std::endl;
    std::cout << "\t" << "1. Triangle" << std::endl;
    std::cout << "\t" << "2. Square" << std::endl;
    std::cout << "\t" << "3. Rectangle" << std::endl;
    std::cout << "Enter your option: ";

    std::cin >> option;

    if (option == 1 || option == 2 || option == 3)
      break;
  }

  // Triangle : need to figure this out
  // TODO
  if (option == 1) {
    unsigned int length = 0;

    while (1) {
      std::cout << "Enter length: ";
      std::cin >> length;


      if (length)
        break;
    }

    for (unsigned int l = 0; l < length; l++) {
      // each row

      for (unsigned int ll = 0; ll < length; ll++ ) {
        // each character
        if (ll == 0 || ll == l) {
          // first character
          std::cout << "*";
        } else if (l == length - 1) {
          std::string line(length, '*');
          std::cout << line;
          break;
        } else {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }


  }

  // Square
  else if (option == 2) {
    unsigned int side = 0;

    while (1) {

      std::cout << "Enter side length: ";
      std::cin >> side;

      std::cout << std::endl;

      if (side)
        break;
    }

    for (unsigned int s = 0; s < side; s++) {
      for (unsigned int v = 0; v < side; v++) {
        if (v == 0 || v == side - 1 || s == 0 || s == side - 1) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
        // Add an extra space to account for new line height
        std::cout << " ";
      }
      std::cout << std::endl;
    }
  }

  // Rectangle
  else if (option == 3) {
    unsigned int width = 0;
    unsigned int height = 0;

    while (1) {
      std::cout << "Enter width: ";
      std::cin >> width;

      std::cout << "Enter height: ";
      std::cin >> height;

      if (width && height)
        break;
    }

    for (unsigned int h = 0; h < height; h++) {
      for (unsigned int w = 0; w < width; w++) {
        if (w == 0 || h == 0 || h == height - 1 || w == width -1) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }

        std::cout << " ";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
