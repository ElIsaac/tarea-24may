#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StringVector : public vector<void*>
{
public:
    // Redefinición de push_back para aceptar string*
    void push_back(string* str)
    {
        vector<void*>::push_back(str);
    }

    // Redefinición del operador [] para producir string*
    string* operator[](size_t index) const
    {
        return static_cast<string*>(vector<void*>::operator[](index));
    }
};

int main()
{
    StringVector miVector;
    
    string texto = "sdfdis";
    string* puntero_a_string = new string(texto);

    miVector.push_back(puntero_a_string);

    cout << (*miVector[0]) << endl;

    // Intento de push_back con un void*
    //void* puntero_void = nullptr;
    //miVector.push_back(puntero_void);

    delete puntero_a_string;

    return 0;
}
