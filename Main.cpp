#include "Vector3D.h"
#include "Punto3D.h"

int main(int argc, char const *argv[])
{
    Punto3D p(2,2,2);
    p.mostrarCoor();
    Vector3D v(0,0,0);
    v.mostrarCoor();
    Punto3D r = p - v;
    r.mostrarCoor();
    cout<<endl<<endl;
    Punto3D producto = 2*r;
    producto.mostrarCoor();
    cout<<endl<<endl;
    Vector3D resta = p - r;
    resta.mostrarCoor();
    return 0;
}
