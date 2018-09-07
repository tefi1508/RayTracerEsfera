#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
using namespace std;

class Vector3D {        
    public:
        double x, y, z;
        Vector3D();
        Vector3D(double n);
        Vector3D(double x, double y, double z);
        Vector3D operator+(Vector3D vector);
        Vector3D operator-(Vector3D vector);
        Vector3D operator*(Vector3D vector);
        friend Vector3D operator*(double n,Vector3D vector);
        void mostrarCoor();
};

#endif