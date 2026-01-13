//
// Created by Quentin Hautot on 14/01/2026.
//

#include "world.h"
#include "raylib.h"

void CreateWorld(void)
{
    for (int x = 0; x < WX; x++)
        for (int y = 0; y < WY; y++)
            for (int z = 0; z < WZ; z++)
            {
                if (y < 4) world[x][y][z] = BLOCK_STONE;
                else if (y == 4) world[x][y][z] = BLOCK_GRASS;
                else world[x][y][z] = BLOCK_AIR;
            }
}