/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 00:28:39 by sakitaha          #+#    #+#             */
/*   Updated: 2025/01/19 00:53:18 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstddef>
#include <iostream>
#include <string>

void printInt(int &i) { std::cout << "Type int: " << i << std::endl; }

void printString(const std::string &str) {
  std::cout << "Type str: " << str << std::endl;
}

void printChar(char &c) { std::cout << "Type char: " << c << std::endl; }

int main() {

  std::cout << "=== int ===" << std::endl;
  int i[] = {0, 1, 2};
  size_t size_i = sizeof(i) / sizeof(i[0]);
  iter(i, size_i, printInt);

  std::cout << "=== str ===" << std::endl;
  std::string str[] = {"zero", "one", "two"};
  size_t size_str = sizeof(str) / sizeof(str[0]);
  iter(str, size_str, printString);

  std::cout << "=== char ===" << std::endl;
  char c[] = {'a', 'b', 'c'};
  size_t size_c = sizeof(c) / sizeof(c[0]);
  iter(c, size_c, printChar);

  return 0;
}
