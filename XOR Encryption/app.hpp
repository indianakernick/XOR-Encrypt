//
//  app.hpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#ifndef app_hpp
#define app_hpp

#include <stdexcept>

class ArgError final : public std::runtime_error {
public:
  ArgError();
};

void runApp(int, const char **);

#endif
