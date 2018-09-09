#include "Punto3D.h"

Punto3D::Punto3D(){
    x=0;
    y=0;
    z=0;
}

Punto3D::Punto3D(double n){
    x=n;
    y=n;
    z=n;
}

Punto3D::Punto3D(double a, double b, double c){
    x=a;
    y=b;
    z=c;
}

Punto3D Punto3D::operator+(Vector3D vector){
    Punto3D resultado;
    resultado.x = x+vector.x;
    resultado.y = y+vector.y;
    resultado.z = z+vector.z;
    return resultado;
}

Punto3D Punto3D::operator-(Vector3D vector){
    Punto3D resultado;
    resultado.x = x-vector.x;
    resultado.y = y-vector.y;
    resultado.z = z-vector.z;
    return resultado;
}

Vector3D Punto3D::operator-(Punto3D p){
    Vector3D resultado;
    resultado.x = x - p.x;
    resultado.y = y - p.y;
    resultado.z = z - p.z;
    return resultado;
}

Punto3D operator* (double n, Punto3D p){
    Punto3D resultado;
    resultado.x = n*p.x;
    resultado.y = n*p.y;
    resultado.z = n*p.z;
    return resultado;
}



void Punto3D::mostrarCoor(){
    cout<<"Xp: "<<x<<" Yp: "<<y<<" Zp: "<<z<<endl;
}