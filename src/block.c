#include "block.h"
#include "raylib.h"

// Textures
static Texture2D texDirt;
static Texture2D texGrassTop;
static Texture2D texGrassSide;
static Texture2D stone;

// ===============================
// Initialisation des textures
// ===============================
void InitBlockTextures(void) {
    texDirt = LoadTexture("textures/blocks/dirt.png");
    texGrassTop = LoadTexture("textures/blocks/grass_top.png");
    texGrassSide = LoadTexture("textures/blocks/grass_side_carried.png");
    stone = LoadTexture("textures/blocks/stone.png");
}

void UnloadBlockTextures(void) {
    UnloadTexture(texDirt);
    UnloadTexture(texGrassTop);
    UnloadTexture(texGrassSide);
    UnloadTexture(stone);
}

// ===============================
// Dessin d’un bloc complet
// ===============================
void DrawBlock(Vector3 pos, BlockType type) {
    if (type == BLOCK_AIR) return;

    Color color;

    switch(type) {
        case BLOCK_GRASS: color = GREEN; break;
        case BLOCK_DIRT: color = BROWN; break;
        case BLOCK_STONE: color = GRAY; break;
        default: color = WHITE; break;
    }

    DrawCube(pos, BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE, color);
    DrawCubeWires(pos, BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE, BLACK);
}


