#pragma once

#define CRYPTONOTE_PUBLIC_ADDRESS_TEXTBLOB_VER          0
#define CURRENT_TRANSACTION_VERSION                     1
#define CURRENT_BLOCK_MAJOR_VERSION                     1
#define CURRENT_BLOCK_MINOR_VERSION                     0

#define BLOCK_MAJOR_VERSION_1                           1
#define BLOCK_MAJOR_VERSION_2                           2
#define BLOCK_MAJOR_VERSION_3                           3

#define COIN                                            ((uint64_t)100000000000) // pow(10, 11)
#define DEFAULT_FEE                                     ((uint64_t)1000000) // pow(10, 6)


#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            60
#define CRYPTONOTE_DISPLAY_DECIMAL_POINT                12

#define CRYPTONOTE_MAX_BLOCK_SIZE                       500000000  // block header blob limit, never used!
#define CRYPTONOTE_MAX_TX_SIZE                          1000000000

// MONEY_SUPPLY - total number coins to be generated
#define MONEY_SUPPLY                                    std::numeric_limits<uint64_t>::max()
#define EMISSION_SPEED_FACTOR_PER_MINUTE                18
#define EMISSION_SPEED_FACTOR                           18
#define FINAL_SUBSIDY_PER_MINUTE                        ((uint64_t)300000000000) // 3 * pow(10, 11)
#define CRYPTONOTE_REWARD_BLOCKS_WINDOW                 100
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE       1000000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2    1000000 //size of block (bytes) after which reward for block calculated using block size
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1    100000 //size of block (bytes) after which reward for block calculated using block size - before first fork
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V5    1000000 //size of block (bytes) after which reward for block calculated using block size - second change, from v5

#define DIFFICULTY_TARGET                               240  // seconds
#define DIFFICULTY_TARGET_V2                            240  // seconds
#define DIFFICULTY_TARGET_V1                            240  // seconds - before first fork

uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 102;
#define EXPECTED_NUMBER_OF_BLOCKS_PER_DAY               24 * 60 * 60 / DIFFICULTY_TARGET
#define DIFFICULTY_WINDOW                               EXPECTED_NUMBER_OF_BLOCKS_PER_DAY // blocks
#define DIFFICULTY_LAG                                  15  // !!!
#define DIFFICULTY_CUT                                  60  // timestamps to cut after sorting
#define DIFFICULTY_BLOCKS_COUNT                         DIFFICULTY_WINDOW + DIFFICULTY_LAG

#define MINER_CONFIG_FILE_NAME                  "miner_conf.json"

#define THREAD_STACK_SIZE                       5 * 1024 * 1024