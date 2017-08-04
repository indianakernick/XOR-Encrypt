//
//  app.cpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#include "app.hpp"

#include <cstdio>
#include <cstring>
#include "key.hpp"
#include "encrypt.hpp"

static constexpr char USAGE[] = R"(Usage:
  encrypt <in_file> <out_file>
  encrypt with_key <in_file> <out_file>

Options:
  in_file       A path to the input file
  out_file      A path to the output file
  with_key      The file will be encrypted with a key from stdin
)";

ArgError::ArgError()
  : std::runtime_error("Invalid arguments") {}

void runApp(const int argc, const char **argv) {
  if (argc == 1) {
    std::puts(USAGE);
  } else if (argc == 2) {
    throw ArgError();
  } else if (argc == 3) {
    const uint64_t key = makeKey();
    encrypt(key, argv[1], argv[2]);
    std::printf("Encryption key:\n%llu\n", key);
  } else if (argc == 4) {
    if (std::strcmp(argv[1], "with_key") != 0) {
      throw ArgError();
    }
    
    uint64_t key = 0;
    std::scanf("%llu", &key);
    encrypt(key, argv[2], argv[3]);
  }
}
