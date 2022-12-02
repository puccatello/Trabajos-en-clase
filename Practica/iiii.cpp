#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
struct Vector3
{
    double e[3] = { 0 };

    Vector3() {}
    ~Vector3() {}

    inline Vector3(double e0, double e1, double e2)
    {
        this->e[0] = e0;
        this->e[1] = e1;
        this->e[2] = e2;
    }
};

struct OrbitalEntity 
{
    double e[7] = { 0 };

    OrbitalEntity() {}
    ~OrbitalEntity() {}

    inline OrbitalEntity(double e0, double e1, double e2, double e3, double e4, double e5, double e6)
    {
        this->e[0] = e0;
        this->e[1] = e1;
        this->e[2] = e2;
        this->e[3] = e3;
        this->e[4] = e4;
        this->e[5] = e5;
        this->e[6] = e6;
    }
};
int main(){
    int N_ASTEROIDS=0;
OrbitalEntity* orbital_entities;

orbital_entities = (OrbitalEntity*)malloc(sizeof(OrbitalEntity) * (9 + N_ASTEROIDS));

orbital_entities[0] = { 0.0,0.0,0.0,        0.0,0.0,0.0,        1.989e30 }; // a star similar to the sun
orbital_entities[1] = { 57.909e9,0.0,0.0,   0.0,47.36e3,0.0,    0.33011e24 }; // a planet similar to mercury
orbital_entities[2] = { 108.209e9,0.0,0.0,  0.0,35.02e3,0.0,    4.8675e24 }; // a planet similar to venus
orbital_entities[3] = { 149.596e9,0.0,0.0,  0.0,29.78e3,0.0,    5.9724e24 }; // a planet similar to earth
orbital_entities[4] = { 227.923e9,0.0,0.0,  0.0,24.07e3,0.0,    0.64171e24 }; // a planet similar to mars
orbital_entities[5] = { 778.570e9,0.0,0.0,  0.0,13e3,0.0,       1898.19e24 }; // a planet similar to jupiter
orbital_entities[6] = { 1433.529e9,0.0,0.0, 0.0,9.68e3,0.0,     568.34e24 }; // a planet similar to saturn
orbital_entities[7] = { 2872.463e9,0.0,0.0, 0.0,6.80e3,0.0,     86.813e24 }; // a planet similar to uranus
orbital_entities[8] = { 4495.060e9,0.0,0.0, 0.0,5.43e3,0.0,     102.413e24 }; // a planet similar to neptune

double t_0 = 0;
double t = t_0;
double dt = 86400;
double t_end = 86400 * 365 * 10; // approximately a decade in seconds
double BIG_G = 6.67e-11; // gravitational constant

while (t < t_end)
{
    for (size_t m1_idx = 0; m1_idx < 9 + N_ASTEROIDS; m1_idx++)
    {       
        Vector3 a_g = { 0,0,0 };

        for (size_t m2_idx = 0; m2_idx < 9 + N_ASTEROIDS; m2_idx++)
        {
            if (m2_idx != m1_idx)
            {
                Vector3 r_vector;

                r_vector.e[0] = orbital_entities[m1_idx].e[0] - orbital_entities[m2_idx].e[0];
                r_vector.e[1] = orbital_entities[m1_idx].e[1] - orbital_entities[m2_idx].e[1];
                r_vector.e[2] = orbital_entities[m1_idx].e[2] - orbital_entities[m2_idx].e[2];

                double r_mag = sqrt(r_vector.e[0] * r_vector.e[0] + r_vector.e[1] * r_vector.e[1] + r_vector.e[2] * r_vector.e[2]);

                double acceleration = -1.0 * BIG_G * (orbital_entities[m2_idx].e[6]) / pow(r_mag, 2.0);

                Vector3 r_unit_vector = { r_vector.e[0] / r_mag,r_vector.e[1] / r_mag,r_vector.e[2] / r_mag };

                a_g.e[0] += acceleration * r_unit_vector.e[0];
                a_g.e[1] += acceleration * r_unit_vector.e[1];
                a_g.e[2] += acceleration * r_unit_vector.e[2];
            }
        }

        orbital_entities[m1_idx].e[3] += a_g.e[0] * dt;
        orbital_entities[m1_idx].e[4] += a_g.e[1] * dt;
        orbital_entities[m1_idx].e[5] += a_g.e[2] * dt;
    }

for (size_t entity_idx = 0; entity_idx < 9 + N_ASTEROIDS; entity_idx++)
    {
        orbital_entities[entity_idx].e[0] += orbital_entities[entity_idx].e[3] * dt;
        orbital_entities[entity_idx].e[1] += orbital_entities[entity_idx].e[4] * dt;
        orbital_entities[entity_idx].e[2] += orbital_entities[entity_idx].e[5] * dt;
    }
    
    t += dt;
    
}}


