#include <iostream>
#include <string>
using namespace std;

class Figura
{
public:
    virtual void dibujar() const = 0; // Función virtual pura y constante
};

class Circulo : public Figura
{
public:
    void dibujar() const
    {
        cout << "círculo" << endl;
    }
};

class Cuadrado : public Figura
{
public:
    void dibujar() const
    {
        cout << "cuadrado" << endl;
    }
};

class Triangulo : public Figura
{
public:
    void dibujar() const
    {
        cout << "triángulo" << endl;
    }
};

void dibujarFigura(const Figura& figura)
{
    cout << "Dibujando un ";
    figura.dibujar();
}

int main()
{
    Figura* arrFiguras[3];

    arrFiguras[0] = new Circulo();
    arrFiguras[1] = new Cuadrado();
    arrFiguras[2] = new Triangulo();

    arrFiguras[0]->dibujar();
    arrFiguras[1]->dibujar();
    arrFiguras[2]->dibujar();

    dibujarFigura(*arrFiguras[0]);
    dibujarFigura(*arrFiguras[1]);
    dibujarFigura(*arrFiguras[2]);

    delete arrFiguras[0];
    delete arrFiguras[1];
    delete arrFiguras[2];

    return 0;
}
