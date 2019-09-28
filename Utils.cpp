#include "Utils.h"

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str); // Turn the string into a stream.
    std::string tok;

    while (getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }

    return internal;
}

std::string toString(std::pair<int, int> pair) {
    return "[" + std::to_string(pair.first) + "," + std::to_string(pair.second) + "]";
}
