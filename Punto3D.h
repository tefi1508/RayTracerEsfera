#ifndef PUNTO3D_H
#define PUNTO3D_H
#include "Vector3D.h"

class Punto3D {
    public:    
        double x, y, z;
    public:
        Punto3D();                                             // Constructor por defecto
        Punto3D(double n);                                     // Constructor
        Punto3D(double v_x, double v_y, double v_z);           // Constructor1
    
        Vector3D operator- (const Punto3D& p) const;           // Restar dos puntos1
        Punto3D operator+ (const Vector3D v) const;           // Sumar al punto un vector1
        Punto3D operator- (Vector3D v);           // Restar al punto un vector1
        Punto3D operator* (double n);              // Multiplicar un punto por un numero1
        friend Punto3D operator* (double n, Punto3D p); // Multiplicar un mumero por un punto1
        void mostrarCoor();
};

#endif