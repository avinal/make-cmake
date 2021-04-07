/**
 * @file hello.cc
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since April 07, 2021
 *
 * Hello World Implementation
 */

#include <hello.h>

Hello::Hello(std::string name) : name_(name) {}

void Hello::greet() {
  std::cout << "Hello " << name_ << ". Welcome to Make!" << std::endl;
}