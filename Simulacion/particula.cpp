#include "particula.h"


double Particula::getX() const
{
    return x;
}

double Particula::getY() const
{
    return y;
}

Particula::Particula(double x, double y, double v, double ang)
{
    this->x=x;
    this->y=y;
    this->v=v;
    this->ang=ang;
    t=0.01;
    g=9.8;
}

void Particula::CalcularPosicion()
{
    x=x+vx*t;
    y=y+vy*t-0.5*g*t*t;
}

void Particula::CalcularVelocidad()
{
    vx=v*cos(ang);
    vy=v*sin(ang)-g*t;
}

void Particula::ActualizarVelocidad()
{
    v=sqrt(pow(vx,2)+ pow(vy,2));
    ang=atan2(vy,vx);
}
