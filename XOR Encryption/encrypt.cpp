//
//  encrypt.cpp
//  XOR Encryption
//
//  Created by Indi Kernick on 4/8/17.
//  Copyright © 2017 Indi Kernick. All rights reserved.
//

#include "encrypt.hpp"

#include <random>
#include "file.hpp"

void encrypt(const uint64_t key, const char *inPath, const char *outPath) {
  File inFile = openFile(inPath, "rb");
  File outFile = openFile(outPath, "wb");
  
  std::mt19937_64 gen(key);
  std::uniform_int_distribution<uint8_t> dist;
  
  uint8_t b = std::fgetc(inFile.get());
  while (b != uint8_t(EOF)) {
    std::fputc(dist(gen) ^ b, outFile.get());
    b = std::fgetc(inFile.get());
  }
}
