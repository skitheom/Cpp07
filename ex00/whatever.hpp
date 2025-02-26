/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:16:02 by sakitaha          #+#    #+#             */
/*   Updated: 2025/01/21 14:37:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T> T &min(T &a, T &b) { return (a < b ? a : b); }

template <typename T> const T &min(const T &a, const T &b) {
  return (a <= b ? a : b);
}

template <typename T> T &max(T &a, T &b) { return (a > b ? a : b); }

template <typename T> const T &max(const T &a, const T &b) {
  return (a >= b ? a : b);
}

#endif // WHATEVER_HPP
