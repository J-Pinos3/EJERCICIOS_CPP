#include "Scores.h"

Scores::Scores(int maxEnt){
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores(){
    delete[] entries;
}

void Scores::add(const GameEntry& e){

    if( numEntries == maxEntries ){ //entries array is full
        if( e.getScore() < entries[maxEntries-1].getScore() ){
            return; //not high enough
        }
    }else{
        numEntries++;
    }
    //find lower entry
    int lowerEntry = 0;
    for(int i = 0; i < numEntries; i++){
        if( entries[i].getScore() < e.getScore() ){
            lowerEntry = i;
            break;
        }
    }

    //move elements to right
    //from right to left
    int i = numEntries-2; //penultimate
    while( i >= 0  && e.getScore() > entries[i].getScore() ){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
    
}

GameEntry Scores::remove(int i) throw(std::out_of_range){
    if(i < 0 || i>= numEntries){
        throw std::out_of_range("Invalid array index");
    }

    
    GameEntry toRemove = entries[i];

    for( int j = i+1; j < numEntries; j++ ){
        entries[j-1] = entries[j];
    }
    numEntries--;
    
    return toRemove;
}