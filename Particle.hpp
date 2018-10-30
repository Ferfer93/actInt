//
//  Particle.hpp
//  flocking_mips
//
//  Created by <author> on 06/06/2018.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include <vector>
#include "Cells.hpp"

using namespace std;

class Particle {
private:
public:
    //Particle state
    int particleIndex;
    float posX;
    int spin;

    //Universe
    float dT;
    int L, N, sC; //Passed from running instance of simulation

    //Methods
    Particle(float partR, float initPosX, float initPosY, float initTheta, int iL, int isC, int iN, int iIndex);
    int updateState();
    ~Particle();
protected:

};


#endif /* Particle_hpp */
