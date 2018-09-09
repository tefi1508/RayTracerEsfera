#include "Vector3D.h"
#include "Punto3D.h"

int main(int argc, char const *argv[])
{
    Punto3D p(2,2,2);
    p.mostrarCoor();
    Vector3D v(0,0,0);
    v.mostrarVector();
    Punto3D r = p - v;
    r.mostrarCoor();
    cout<<endl<<endl;
    Punto3D producto = 2*r;
    producto.mostrarCoor();

    //Vectores

    /*Vector3D v1(2,2,2), v2(2,2,2), res;
    res = v1 + v2;
    res.mostrarVector();
    res = v1 - v2;
    res.mostrarVector();
    res = 2 * v1;
    res.mostrarVector();
    res = v1 ^ v2;
    res.mostrarVector();
    cout<< "Producto escalar: " <<v1 * v2<<endl;
    res = v1 * 2;
    res.mostrarVector();
    res = v1 / 2;
    res.mostrarVector();*/
    return 0;
}
