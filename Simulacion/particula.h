#ifndef PARTICULA_H
#define PARTICULA_H
#include <math.h>

class Particula
{
private:
    //Atributos
    double x,y,v,ang,vx,vy;
    double t,g;


public:
    Particula(double x, double y,double v, double ang);

    //metodos
    void CalcularPosicion();
    void CalcularVelocidad();
    void ActualizarVelocidad();
    double getX() const;
    double getY() const;
};

#endif // PARTICULA_H
