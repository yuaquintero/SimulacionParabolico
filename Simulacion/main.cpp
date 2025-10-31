#include <iostream>
#include <particula.h>
#include <fstream>      // std::ofstream

#define PI 3.14159265

using namespace std;

int main()
{
    double x,y,v,ang;
    ofstream ofs ("Calculos.txt", std::ofstream::out);
    cout << "******* Simulacion movimiento parabolico ********" << endl;
    cout <<"Ingrese las condiciones iniciales"<<endl;
    cout <<"Ingrese la posicion inicial en x"<<endl;
    cin>>x;
    cout <<"Ingrese la posicion inicial en y"<<endl;
    cin>>y;
    cout <<"Ingrese la velocidad inicial"<<endl;
    cin>>v;
    cout <<"Ingrese el angulo inicial"<<endl;
    cin>>ang;
    double rad=(ang*PI)/180;
    Particula miParticula(x,y,v,rad);

    ofs<<miParticula.getX()<<'\t'<<miParticula.getY()<<endl;
    while(miParticula.getY()>=0)
    {
        miParticula.CalcularVelocidad();
        miParticula.CalcularPosicion();
        miParticula.ActualizarVelocidad();
        ofs<<miParticula.getX()<<'\t'<<miParticula.getY()<<endl;
    }
    ofs.close();
    cout<<"Simulación terminada"<<endl;



    return 0;
}
