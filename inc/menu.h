#pragma once

typedef struct
{
    int num_stacks;
    int stack_size;
    int empty_stacks;
} GameConfig;

void run_menu(int rows, int cols, GameConfig *config);