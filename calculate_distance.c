#include <stdio.h>

int main()
{
    unsigned char distanceA2B = 45;
    unsigned char distanceB2C = 90;
    
    unsigned char distanceA2C;
    
    distanceA2C = distanceA2B + distanceB2C;
    
    printf("The distance between A to C is : %d km", distanceA2C); 
    
    return 0;
    
} 
