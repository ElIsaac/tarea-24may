#include <iostream>

class SpaceShip
{
public:
    void fly()
    {
        std::cout << "SpaceShip flying" << std::endl;
    }
    virtual ~SpaceShip()
    {
        std::cout << "SpaceShip destructor" << std::endl;
    }
};

class Shuttle : public SpaceShip
{
public:
    void land()
    {
        std::cout << "Shuttle landing" << std::endl;
    }
    ~Shuttle()
    {
        std::cout << "Shuttle destructor" << std::endl;
    }
};

int main()
{
    Shuttle myShuttle;
    myShuttle.fly();
    myShuttle.land();

    
    SpaceShip& spaceshipRef = myShuttle;
    // spaceshipRef.land(); // Esto causará un error de compilación

    return 0;
}
