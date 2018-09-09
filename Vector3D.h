#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
using namespace std;

class Vector3D {        
    public:
        //Variables
        double x, y, z;

        //Constructores
        Vector3D();
        Vector3D(double);
        Vector3D(double, double, double);

        //Sobrecargas
        Vector3D operator+(Vector3D);               //Sumar dos vectores
        Vector3D operator-(Vector3D);               //Restar dos vectores
        friend Vector3D operator*(double,Vector3D); //Multiplicar un escalar por un vector
        Vector3D operator=(Vector3D);               //Asignacion
        Vector3D operator^(Vector3D);               //Producto vectorial
        double operator*(Vector3D);                 //Producto escalar
        Vector3D operator*(double);                 //Multiplicar un vector por un escalar
        Vector3D operator/(double);                 //dividir un vector por un escalar
        
        //Métodos
        void mostrarVector();
};

#endif