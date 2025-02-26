/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 03:05:24 by sakitaha          #+#    #+#             */
/*   Updated: 2025/01/21 14:55:28 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T> class Array {
private:
  T *ptr_;
  unsigned int n_;

public:
  Array() : ptr_(new T[0]()), n_(0) {
    printMsg("Array default constructor called");
  }

  Array(unsigned int n) : ptr_(new T[n]()), n_(n) {
    printMsg("Array size constructor called");
    for (unsigned int i = 0; i < this->n_; ++i) {
      this->ptr_[i] = 0;
    }
  }

  Array(const Array &other) : ptr_(new T[other.n_]()), n_(other.n_) {
    printMsg("Array copy constructor called");
    for (unsigned int i = 0; i < this->n_; ++i) {
      this->ptr_[i] = other.ptr_[i];
    }
  }

  ~Array() {
    printMsg("Array destructor called");
    delete[] this->ptr_;
  }

  Array &operator=(const Array &other) {
    printMsg("Array copy assignment operator called");
    if (this != &other) {
      delete[] ptr_;
      this->n_ = other.n_;
      this->ptr_ = new T[this->n_]();
      for (unsigned int i = 0; i < this->n_; ++i) {
        this->ptr_[i] = other.ptr_[i];
      }
    }
    return *this;
  }

  T &operator[](unsigned int index) {
    if (index >= this->n_) {
      throw std::out_of_range("Index out of range");
    }
    return this->ptr_[index];
  }

  const T &operator[](unsigned int index) const {
    if (index >= this->n_) {
      throw std::out_of_range("Index out of range");
    }
    return this->ptr_[index];
  }

  unsigned int size() const { return this->n_; }

private:
  void printMsg(const std::string &msg) {
    if (msg.empty())
      return;
    std::cout << msg << std::endl;
  }
};

#endif // ARRAY_HPP
