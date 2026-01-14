//
// Created by Quentin Hautot on 14/01/2026.
//

#ifndef GAMEC_WORLD_H
#define GAMEC_WORLD_H

#include "block.h"

#define WX 16
#define WY 16
#define WZ 16

BlockType world[WX][WY][WZ];


void CreateWorld();


#endif //GAMEC_WORLD_H