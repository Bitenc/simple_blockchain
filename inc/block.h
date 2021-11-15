//
// Created by thibault on 11/15/21.
//

#ifndef SIMPLE_BLOCKCHAIN_BLOCK_H
#define SIMPLE_BLOCKCHAIN_BLOCK_H

#include <string.h>

class Block{
public:
    Block()
    : payload{0}
    , prevHash{0}
    {};

    void add_payload(char *some_payload, uint8_t size)
    {
        memcpy(&payload, some_payload, size);
    };

    void register_prev_block(Block some_prev_block)
    {
        std::size_t hash_prevPayload = std::hash<std::string>{}(some_prev_block.getPayload());
        std::size_t hash_prevCombined = some_prev_block.getPrevHash() ^ (hash_prevPayload << 1);

        prevHash = hash_prevCombined;

    };

    char* getPayload()
    {
        return payload;
    };

    std::size_t getPrevHash()
    {
        return prevHash;
    };


private:
    char payload[256];
    std::size_t prevHash;
};

#endif //SIMPLE_BLOCKCHAIN_BLOCK_H
