#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <vector>;
#include <string>;
#include <iostream>;
#include <fstream>;
#include <ios>;

std::vector<char> readFile(const std::string& filename);

#endif