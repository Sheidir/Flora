/* 
 * File:   TerrainGenerator.h
 * Author: daugh
 *
 * Created on May 11, 2019, 4:14 PM
 */

#ifndef TERRAINGENERATOR_H
#define	TERRAINGENERATOR_H
#include "Vector.h"

class TerrainGenerator {
public:
    int terrain;
    int length;
    int width;
    Vector* UpperLeft;
    int maxElevation;
    
        const int HILL = 0;
        const int SEA = 1;
        const int MOUNTAIN = 2;
        const int VALLEY = 3;
        const int PLAIN = 4;
    
    TerrainGenerator(int type, int length, int width, Vector* UpperLeft);
    void generate();
    virtual ~TerrainGenerator();
private:
    void generateR(int l, int r, Vector* currentVertex);
};

#endif	/* TERRAINGENERATOR_H */

