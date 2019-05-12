/* 
 * File:   Vector.h
 * Author: daugh
 *
 * Created on May 11, 2019, 3:56 PM
 */

#ifndef VECTOR_H
#define	VECTOR_H

class Vector {
public:
        const int NORTH = 0;
        const int SOUTH = 1;
        const int EAST = 2;
        const int WEST = 3;
        
        const int HILL = 0;
        const int SEA = 1;
        const int MOUNTAIN = 2;
        const int VALLEY = 3;
        const int PLAIN = 4;      
        int elevation;
        Vector *adjacent[4];
        
        
        
    Vector(int elevation, Vector* connector, int direction);
    void generateAdjacent(int direction);
    
    virtual ~Vector();
private:

};

#endif	/* VECTOR_H */

