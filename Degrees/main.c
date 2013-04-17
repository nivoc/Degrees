//
//  main.c
//  Degrees
//
//  Created by Matthias on 4/17/13.
//  Copyright (c) 2013 Matthias. All rights reserved.
//

#include <stdio.h>

float fahrenheitFromCelsius(float cel)
{
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}


int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    
    return 0;
}

