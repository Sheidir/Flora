/* 
 * File:   Vector.cpp
 * Author: daugh
 * 
 * Created on May 11, 2019, 3:56 PM
 */

#include "Vector.h"

Vector::Vector(int elevation, Vector* connector, int direction) {
 this->elevation = elevation; 
for(int i = 0; i< 4; i++){
    adjacent[i] = 0;
} 
 adjacent[direction] = connector;

}
void Vector::generateAdjacent(int direction){
        int opposite;
        if (direction % 2 == 0)
        {
        opposite = direction + 1;

        }
        else
        {
         opposite = direction - 1;
         }
        Vector *l = new Vector(88, this, opposite);
         adjacent[direction] = l;
        }


Vector::~Vector() {
}

