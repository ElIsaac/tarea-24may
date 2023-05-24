//: C14:InheritStack2.cpp
// Composition vs. inheritance
#include "./Stack4.h"
#include "./require.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class StringStack
{
    vector<string> stack; // Embed instead of inherit
public:
    void push(string str)
    {
        stack.push_back(str);
    }
    string peek() const
    {
        return stack.back();
    }
    string pop()
    {
        string str = stack.back(); // Obtener el último elemento
        stack.pop_back(); // Eliminar el último elemento del vector
        return str;
    }
    bool vacio() const
    {
        return stack.empty(); // Verificar si el vector está vacío
    }
};
int main()
{
    ifstream in("ej10.cpp");
    assure(in, "ej10.cpp");
    string line;
    StringStack textlines;
    while (getline(in, line))
        textlines.push(line);
    string s;
     while (!textlines.vacio())
    {
        s = textlines.pop();
        cout << s << endl;
    }
} ///:~