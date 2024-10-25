#include "Labyrinth.h"
#include <iostream>


bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    
    bool foundSpellbook = false;
    bool foundPotion = false;
    bool foundWand = false;

    MazeCell* currentCell = start;

        for (int i = 0; i < moves.length()-1; i++){
            MazeCell* nextCell = nullptr;

             switch (moves[i]) {
            case 'N':
                nextCell = currentCell->north;
                break;
            case 'S':
                nextCell = currentCell->south;
                break;
            case 'E':
                nextCell = currentCell->east;
                break;
            case 'W':
                nextCell = currentCell->west;
                break;
            default:
                return false;
        }
        
        if (nextCell == nullptr) {
            return false;
        }
        
        currentCell = nextCell;
        
        if (currentCell->whatsHere == Item::SPELLBOOK) foundSpellbook = true;
        if (currentCell->whatsHere == Item::POTION) foundPotion = true;
        if (currentCell->whatsHere == Item::WAND) foundWand = true;
    }
    
    return foundSpellbook && foundPotion && foundWand;

        }
};




};