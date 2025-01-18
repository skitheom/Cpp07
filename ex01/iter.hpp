/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:41:10 by sakitaha          #+#    #+#             */
/*   Updated: 2025/01/19 00:52:54 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename Fn>
void iter(T *array, std::size_t size, Fn func) {
  if (!array || !func)
    return;
  for (std::size_t i = 0; i < size; ++i) {
    func(array[i]);
  }
}

#endif // ITER_HPP
