#include <iostream>

using namespace std;

enum note
{
    middleC,
    Csharp,
    Cflat
}; // Etc.

class Instrument
{
public:
    void play(note) const // virtual
    {
        cout << "Instrumento tocando" << endl;
    }

    void prepare()
    {
        cout << "Instrumento preparando" << endl;
    }
};

class Wind : public Instrument
{
public:
    void play(note) const 
    {
        cout << "Viento tocando" << endl;
    }
};

void tune(Instrument &i)
{
    i.prepare();
    i.play(middleC);
}

int main()
{
    Wind flute;
    tune(flute); // Upcasting

    return 0;
}
