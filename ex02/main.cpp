/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 02:46:59 by sakitaha          #+#    #+#             */
/*   Updated: 2025/01/21 03:01:10 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <ctime>
#include <iostream>
// #include <cstdlib>

// #define MAX_VAL 750
#define MAX_VAL 5
int main(int, char **) {

  // SCOPE
  std::cout << "=== Default Constructor ===" << std::endl;
  {
    Array<int> tmp;
  }
  std::cout << "=== Size Constructor ===" << std::endl;
  Array<int> numbers(MAX_VAL);
  int *mirror = new int[MAX_VAL];

  std::cout << "=== Prepare random values ===" << std::endl;
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand() % 100;
    std::cout << "value[" << i << "] : " << value << std::endl;
    numbers[i] = value;
    mirror[i] = value;
  }
  // SCOPE
  std::cout << "=== Copy Constructor ===" << std::endl;
  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++) {
      std::cout << "numbers[" << i << "] : " << numbers[i] << "\t| tmp[" << i
                << "] : " << tmp[i] << "\t| test[" << i << "] : " << test[i]
                << std::endl;
    }
  }
  // SCOPE
  std::cout << "=== Copy Assignment Operator ===" << std::endl;
  {
    Array<int> test(0);
    test = numbers;
    for (int i = 0; i < MAX_VAL; i++) {
      std::cout << "numbers[" << i << "] : " << numbers[i] << "\t| test[" << i
                << "] : " << test[i] << std::endl;
    }
  }

  std::cout << "=== Check values between numbers and mirror ===" << std::endl;
  for (int i = 0; i < MAX_VAL; i++) {
    std::cout << "numbers[" << i << "] : " << numbers[i] << "\t| mirror[" << i
              << "] : " << mirror[i] << std::endl;
    if (mirror[i] != numbers[i]) {
      std::cerr << "Didn't save the same value!!" << std::endl;
      return 1;
    }
  }

  try {
    std::cout << "=== Accessing index -2 ===" << std::endl;
    numbers[-2] = 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
  try {
    std::cout << "=== Accessing index MAX_VAL ===" << std::endl;
    numbers[MAX_VAL] = 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  std::cout << "=== Reassigning values ===" << std::endl;
  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  for (int i = 0; i < MAX_VAL; i++) {
    std::cout << "numbers[" << i << "] : " << numbers[i] << "\t| mirror[" << i
              << "] : " << mirror[i] << std::endl;
  }

  delete[] mirror; //
  std::cout << "=== Destruction ===" << std::endl;
  return 0;
}
