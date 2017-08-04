//
//  key.cpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#include "key.hpp"

#include <random>

uint64_t makeKey() {
  static std::random_device gen;
  std::uniform_int_distribution<uint64_t> dist;
  return dist(gen);
}
