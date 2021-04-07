/**
 * @file main.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since April 07, 2021
 *
 * Driver Code for Hello World Program
 */

#include <hello.h>

int main(int argc, char const *argv[]) {
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  Hello hello(name);
  hello.greet();
  return 0;
}
