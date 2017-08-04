//
//  main.cpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#include <iostream>
#include "app.hpp"

int main(const int argc, const char **argv) {
  try {
    runApp(argc, argv);
  } catch (std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
  return 0;
}
