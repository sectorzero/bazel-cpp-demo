#pragma once

#include <cstdint>

class Loader {
    public:
        uint32_t get_answer() const;

    private:
        uint32_t answer = 32;
};
