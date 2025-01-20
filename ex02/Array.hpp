

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
  // Default constructor
  explicit Array() : ptr_(0), n_(0) {
    printMsg("Array default constructor called");
  }
  // Custom constructor
  explicit Array(unsigned int n) : ptr_(new T[n]()), n_(n) {
    printMsg("Array custom constructor called");
    for (unsigned int i = 0; i < this->n_; ++i) {
      this->ptr_[i] = 0;
    }
  }
  // Copy constructor
  Array(const Array &other) : ptr_(new T[other.n_]), n_(other.n_) {
    printMsg("Array copy constructor called");
    for (unsigned int i = 0; i < this->n_; ++i) {
      this->ptr_[i] = other.ptr_[i];
    }
  }
  // Destructor
  ~Array() {
    printMsg("Array destructor called");
    delete[] this->ptr_;
  }
  // Copy assignment operator
  Array &operator=(const Array &other) {
    printMsg("Array copy assignment operator called");
    if (this != &other) {
      delete[] ptr_;
      this->n_ = other.n_;
      this->ptr_ = new T[this->n_];
      for (unsigned int i = 0; i < this->n_; ++i) {
        this->ptr_[i] = other.ptr_[i];
      }
    }
    return *this;
  }
  // Operator[] overload
  T &operator[](unsigned int index) {
    if (index >= this->n_) {
      throw std::out_of_range("Index out of range");
    }
    return this->ptr_[index];
  }
  // Operator[] overload const ver.
  const T &operator[](unsigned int index) const {
    if (index >= this->n_) {
      throw std::out_of_range("Index out of range");
    }
    return this->ptr_[index];
  }
  // Returns the size of the array.
  unsigned int size() const { return this->n_; }

private:
  void printMsg(const std::string &msg) {
    if (msg.empty())
      return;
    std::cout << msg << std::endl;
  }
};

#endif // ARRAY_HPP
