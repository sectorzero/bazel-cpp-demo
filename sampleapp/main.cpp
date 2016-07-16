#include "samplelib/loader.h"

#include <iostream>

int main() {
    Loader loader;
    std::cout << "Testing : Answer = " << loader.get_answer() << std::endl;
    return 0;
}
