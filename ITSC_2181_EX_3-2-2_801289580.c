#include <stdio.h> 

float cube_volume(float);
float volume;

int main(void) 
{
    float volume = cube_volume(3);
    printf("Volume=%f\n", volume);
}

float cube_volume(float side) 
{
    float volume = side * side * side;
    return volume;
}