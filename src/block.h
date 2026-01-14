#ifndef BLOCK_H
#define BLOCK_H

#include "raylib.h"

// Taille standard d’un bloc
#define BLOCK_SIZE 1.0f

// Types de blocs
typedef enum {
    BLOCK_AIR = 0,
    BLOCK_DIRT,
    BLOCK_GRASS,
    BLOCK_STONE
} BlockType;

// Faces d’un bloc
typedef enum {
    FACE_TOP = 0,
    FACE_BOTTOM,
    FACE_LEFT,
    FACE_RIGHT,
    FACE_FRONT,
    FACE_BACK
} BlockFace;

// Initialisation / nettoyage
void InitBlockTextures(void);
void UnloadBlockTextures(void);

// Dessin d’un bloc complet (6 faces)
void DrawBlock(Vector3 position, BlockType type);

#endif
