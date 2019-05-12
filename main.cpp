/* 
 * File:   main.cpp
 * Author: daugh
 *
 * Created on May 11, 2019, 3:31 PM
 */

#include "Vector.h"
#include "TerrainGenerator.h"
#include <cstdlib>

/*
 * 
 */
int main(int argc, char** argv) {
    
    Vector *v = new Vector(8, 0, 0);
    TerrainGenerator * t = new TerrainGenerator(0, 2, 2, v);
    t->generate();
    delete &t;
}

