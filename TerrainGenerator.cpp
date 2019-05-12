/* 
 * File:   TerrainGenerator.cpp
 * Author: daugh
 * 
 * Created on May 11, 2019, 4:14 PM
 */

#include "TerrainGenerator.h"

TerrainGenerator::TerrainGenerator(int terrain, int length, int width, Vector *UpperLeft) {
            this->terrain = terrain;
            this->length = length;
            this->width = width;
            this->UpperLeft = UpperLeft;

            switch (terrain)
            {
                case 0:
                    maxElevation = UpperLeft->elevation;
                    break;
                case 1:
                    maxElevation = UpperLeft->elevation + 1000;
                    break;
                case 2:
                    maxElevation = UpperLeft->elevation + 3000;
                    break;
                case 3:
                    maxElevation = UpperLeft->elevation;
                    break;
                default:
                    maxElevation = UpperLeft->elevation - 500 ;
                    break;
}
}

void TerrainGenerator::generate(){
    generateR(0, 0, UpperLeft);
    int i = 0;
}
void TerrainGenerator::generateR(int l, int w, Vector* currentVertex){
            if(l < length)
            {
                currentVertex->generateAdjacent(2);
                generateR(l + 1, w, currentVertex->adjacent[2]);
            }

            if (w < width)
            {
                currentVertex->generateAdjacent(1);
                generateR(l, w + 1, currentVertex->adjacent[1]);
                if (w != 0)
                {
                    Vector *getWest = currentVertex->adjacent[0];
                    while (getWest->adjacent[0] != 0)
                    {
                        getWest = getWest->adjacent[0];
                    }
                    getWest = getWest->adjacent[3];
                    while (getWest->adjacent[1] != 0)
                    {
                        getWest = getWest->adjacent[1];
                    }
                    currentVertex->adjacent[3] = getWest;
                }
            }
}
TerrainGenerator::~TerrainGenerator() {
}

