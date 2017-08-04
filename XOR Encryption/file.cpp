//
//  file.cpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#include "file.hpp"

FileOpenError::FileOpenError()
  : std::runtime_error("Failed to open file") {}

File openFile(const char *const path, const char *const flags) {
  std::FILE *file = std::fopen(path, flags);
  if (file) {
    return {file, &std::fclose};
  } else {
    throw FileOpenError();
  }
}
