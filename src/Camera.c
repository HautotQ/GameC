//
// Created by Quentin Hautot on 14/01/2026.
//

#include "Camera.h"
#include "raylib.h"

Camera3D camera = {
    .position = (Vector3){8, 8, 8},
    .target   = (Vector3){9, 8, 8},
    .up       = (Vector3){0, 1, 0},
    .fovy     = 70,
    .projection = CAMERA_PERSPECTIVE
};
