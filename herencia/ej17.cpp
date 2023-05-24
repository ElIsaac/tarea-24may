#include <iostream>
using namespace std;
class InstrumentoViento
{
public:
    int numero_agujeros;

public:
    InstrumentoViento(int agujeros) : numero_agujeros(agujeros) {}
    void tocar() { cout << "Tocando instrumento de viento" << endl; }
};

class Flauta : public InstrumentoViento
{
public:
    Flauta(int agujeros) : InstrumentoViento(agujeros) {}
    void tocarFlauta() { cout << "Tocando Flauta" << endl; }
};

int main()
{
    Flauta miFlauta(16);
    InstrumentoViento* miInstrumento = &miFlauta; 
    
    miInstrumento->tocar(); 
    
    // si cambiamos public por protected da error
}
