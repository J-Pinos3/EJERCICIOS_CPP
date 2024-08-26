#include "GameEntry.h"
#include <stdexcept>


class Scores{

public: 
    Scores(int maxEnt = 10);
    ~Scores();

    void add(const GameEntry& e);
    GameEntry remove(int i) throw(std::out_of_range);

private: 
    int maxEntries;
    int numEntries;
    GameEntry* entries;
};