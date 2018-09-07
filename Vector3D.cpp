#include "Vector3D.h"

Vector3D::Vector3D(){
    x=0;
    y=0;
    z=0;
}

Vector3D::Vector3D(double n){
    x=n;
    y=n;
    z=n;
}

Vector3D::Vector3D(double a, double b, double c){
    x=a;
    y=b;
    z=c;
}

Vector3D Vector3D::operator+(Vector3D vector){
    Vector3D resultado;
    resultado.x = x+vector.x;
    resultado.y = y+vector.y;
    resultado.z = z+vector.z;
    return resultado;
}

Vector3D Vector3D::operator-(Vector3D vector){
    Vector3D resultado;
    resultado.x = x-vector.x;
    resultado.y = y-vector.y;
    resultado.z = z-vector.z;
    return resultado;
}

Vector3D Vector3D::operator*(Vector3D vector){

}


void Vector3D::mostrarCoor(){
    cout<<"Xv: "<<x<<" Yv: "<<y<<" Zv: "<<z<<endl;
}