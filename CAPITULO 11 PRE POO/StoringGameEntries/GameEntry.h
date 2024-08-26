#ifndef GAME_ENTRY
#define GAME_ENTRY

#include <string>

using std::string;

class GameEntry{

public:
    GameEntry( const string& n="", int s = 0 );

    string getName() const;
    int getScore() const;

private:
    string name;
    int score;

};

#endif //GAME_ENTRY