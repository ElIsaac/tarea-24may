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
    virtual void play(note) const
    {
        cout << "Instrument::play" << endl;
    }

    virtual void preparar() const
    {
        cout << "Instrument::preparar" << endl;
    }
};

class Wind : public Instrument
{
public:
    void play(note) const
    {
        cout << "Wind::play" << endl;
    }

    void preparar() const
    {
        cout << "Wind::preparar" << endl;
    }
};

void tune(Instrument &i)
{
    
    i.play(middleC);
    i.preparar();
}

int main()
{
    Wind flute;
    tune(flute); // Upcasting
    return 0;
}
