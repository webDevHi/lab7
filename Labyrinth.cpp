#include "Labyrinth.h"
#include <iostream>
bool foundSpellBook = false;
bool foundWand = false;
bool foundPotion = false;

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    

    MazeCell* currentCell = start;
    bool everyItemFound = foundSpellBook && foundWand && foundPotion;
        //moveToValidPos(currentCell);

        // if (currentCell->whatsHere == Item::SPELLBOOK && !everyItemFound){
        //     foundSpellBook = true;
        // } else if (currentCell->whatsHere == Item::POTION && !everyItemFound){
        //     foundWand = true;
        // } else if (currentCell->whatsHere == Item::WAND && !everyItemFound){
        //     foundPotion = true;
        // } else {
        //     isPathToFreedom(currentCell, moves);
        // }

        for (int i = 0; i < moves.length()-1; i++){

            if (!everyItemFound){
            if (moves[i] == 'N' && currentCell->north != nullptr){
                std::cout << "north works" << std::endl;
            }else if (moves[i] == 'W' && currentCell->west != nullptr){
                std::cout << "west works" << std::endl;
            }else if (moves[i] == 'E' && currentCell->east != nullptr){
                std::cout << "east works" << std::endl;
            }else if (moves[i] == 'S' && currentCell->south != nullptr){
                std::cout << "south works" << std::endl;
            }else {
                return false;
            }
            }

        }
    return true;
};


 void findItem(MazeCell* currCell){
      
    bool foundSpellBook = false;
    bool foundWand = false;
    bool foundPotion = false;

    if (currCell->whatsHere == Item::SPELLBOOK ){
        foundSpellBook = true;
    } else if (currCell->whatsHere == Item::POTION){
        foundWand = true;
    } else if (currCell->whatsHere == Item::WAND){
        foundPotion = true;
    };

};