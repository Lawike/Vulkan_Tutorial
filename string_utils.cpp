#include <iostream>
#include "string_utils.h"

bool isStringIncluded(const char** arrayOfStrings, const char* targetString) {
    while (*arrayOfStrings != nullptr) {
        if (std::strcmp(*arrayOfStrings, targetString) == 0) {
            return true; // Found the target string
        }
        ++arrayOfStrings;
    }
    return false; // Target string not found
}