#include <iostream>
using namespace std;

class Figura
{
public:
    virtual void dibujar()
    {
        cout << "Dibujar" << endl;
    }
};

class Circulo : public Figura
{
public:
    void dibujar()
    {
        cout << "círculo" << endl;
    }
};

class Cuadrado : public Figura
{
public:
    void dibujar()
    {
        cout << "cuadrado" << endl;
    }
};

class Triangulo : public Figura
{
public:
    void dibujar()
    {
        cout << "triángulo" << endl;
    }
};

int main()
{
    
    Figura *arrFiguras[3];

    arrFiguras[0] = new Circulo();
    arrFiguras[1] = new Cuadrado();
    arrFiguras[2] = new Triangulo();

    arrFiguras[0]->dibujar();
    arrFiguras[1]->dibujar();
    arrFiguras[2]->dibujar();

    delete arrFiguras[0];
    delete arrFiguras[1];
    delete arrFiguras[2];

    return 0;
}
