#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    
    bool foundSpellBook = false;
    bool foundWand = false;
    bool foundPotion = false;

    MazeCell* currentCell = start;

    while (!foundSpellBook && !foundWand && !foundPotion){

    }
  //  check if item exist, if it does set to true
   // check if move is legal

    (void) start;
    (void) moves;
    return false;
};

bool isLegalMove(MazeCell* currCell ){

    if (currCell->north != nullptr) return true;

     if (currCell->west != nullptr) return true;

     if (currCell->east != nullptr) return true;

     if (currCell->south != nullptr) return true;


};