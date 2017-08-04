//
//  file.hpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#ifndef file_hpp
#define file_hpp

#include <cstdio>
#include <memory>
#include <stdexcept>

class FileOpenError final : public std::runtime_error {
public:
  FileOpenError();
};

using File = std::unique_ptr<std::FILE, decltype(&std::fclose)>;

File openFile(const char *, const char *);

#endif
