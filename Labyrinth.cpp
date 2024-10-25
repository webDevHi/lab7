#include "Labyrinth.h"
#include <iostream>


bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    
    bool* pFoundSpellBook = new bool(false);  // Create pointer to bool
    bool* pFoundWand = new bool(false);
    bool* pFoundPotion = new bool(false);

    MazeCell* currentCell = start;
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
            bool everyItemFound = pFoundSpellBook && pFoundWand && pFoundPotion;

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
    delete pFoundSpellBook;
    delete pFoundWand;
    delete pFoundPotion;
    return true;
};


 void findItem(MazeCell* currCell, bool* pFoundSpellBook, bool* pFoundWand, bool* pFoundPotion){

    if (currCell->whatsHere == Item::SPELLBOOK ){
        pFoundSpellBook = true;
    } else if (currCell->whatsHere == Item::POTION){
        pFoundWand = true;
    } else if (currCell->whatsHere == Item::WAND){
        pFoundPotion = true;
    };

};