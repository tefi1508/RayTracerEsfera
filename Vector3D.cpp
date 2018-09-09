#include "Vector3D.h"

Vector3D::Vector3D(){
    x = 0;
    y = 0;
    z = 0;
}

Vector3D::Vector3D(double n){
    x = n;
    y = n;
    z = n;
}

Vector3D::Vector3D(double a, double b, double c){
    x = a;
    y = b;
    z = c;
}

Vector3D Vector3D::operator+(Vector3D v){
    return Vector3D(x + v.x,y + v.y,z + v.z);
}

Vector3D Vector3D::operator-(Vector3D v){
    return Vector3D(x - v.x,y - v.y,z - v.z);
}

Vector3D operator*(double n, Vector3D v){
    return Vector3D(v.x * n, v.y * n, v.z * n);
}

Vector3D Vector3D::operator=(Vector3D v){
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

Vector3D Vector3D::operator^(Vector3D v){
    return Vector3D(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
}

double Vector3D::operator*(Vector3D v){
    return x * v.x + y * v.y + z * v.z;
}

Vector3D Vector3D::operator*(double n){
    return Vector3D(x * n, y * n, z * n);
}

Vector3D Vector3D::operator/(double n){
    return Vector3D(x / n, y / n, z / n);
}

void Vector3D::mostrarVector(){
    cout<<"< "<<x<<", "<<y<<","<<z<<" >"<<endl;
}