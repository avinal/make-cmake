/**
 * @file hello.h
 * @author Avinal Kumar <avinal.xlvii@gmail.com>
 * @since April 07, 2021
 *
 * Header file for Hello World
 */

#ifndef HELLO_H_
#define HELLO_H_

#include <iostream>
#include <string>

class Hello {
private:
  std::string name_;

public:
  Hello(std::string name);

  void greet();
};

#endif