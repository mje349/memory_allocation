/*
 * Author: Montana Esguerra
 * Filename: memory.c
 * Description: Implementation File for memory alocation lab
 */

#include <stdlib.h>
#include <stdio.h>
#include "oslabs.h"

//NULL BLOCK
struct MEMORY_BLOCK NULLBLOCK = {0, 0, 0, 0};

//Function Prototypes


//BEST FIT ALLOCATE
struct MEMORY_BLOCK best_fit_allocate(int request_size, struct MEMORY_BLOCK memory_map[MAPMAX],int *map_cnt, int process_id)
{
    return memory_map[0];

}

//Function Implementations
//
//
void hello()
{
    printf("Hello from  Memory!\n");
}

//Displays a given memory block
void display_memory(struct MEMORY_BLOCK* to_display)
{
    printf("Start Address: %d\n", to_display->start_address);
    printf("End Address: %d\n", to_display->end_address);
    printf("Segment Size: %d\n", to_display->segment_size);
    printf("Process ID: %d\n", to_display->process_id);
}

//Inserts a memory block into the memory map (enqueue implementation)
//Returns 0 if the memory map is full
int insert(struct MEMORY_BLOCK* to_insert, int* map_cnt)
{
    if (*map_cnt >= MAPMAX)
        return 0;
