#include <iostream>

#include "inc/block.h"

int main() {
    Block genesisBlock{};
    Block blockOne{};
    blockOne.add_payload((char*)"This is block one!", 18);
    blockOne.register_prev_block(genesisBlock);




    std::cout << "Hello, World!" << std::endl;
    return 0;
}
