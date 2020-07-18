/*
 * Author: Montana Esguerra
 * Filename: main.c
 * Description: Test Bed for Memory Allocation Lab
 */

#include <stdlib.h>
#include <stdio.h>
#include "oslabs.h"

int main(int argc, char* argv[])
{
    struct MEMORY_BLOCK null_block = {0, 0, 0, 0};

    struct MEMORY_BLOCK memory_map[MAPMAX]; // EMPTY memory_map
    int map_cnt = 0;
    int request_size = 10;
    int process_id = 32;


    return 0;
}
