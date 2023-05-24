//: C14:FName2.cpp
// Subtyping solves the problem
#include "./require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class FName2 : public ifstream
{
    string fileName;
    bool named;

public:
    FName2() : named(false) {}
    FName2(const string &fname)
        : ifstream(fname.c_str()), fileName(fname)
    {
        assure(*this, fileName);
        named = true;
    }
    string name() const { return fileName; }
    void name(const string &newName)
    {
        if (named)
            return; // Don’t overwrite
        fileName = newName;
        named = true;
    }
     // Ocultar las funciones miembro heredadas de ifstream
    void getline(string &s) {
         ifstream::getline(&s[0], s.size()); 
    }
    using ifstream::seekg;
    using ifstream::close;
};
int main()
{
    FName2 file("ej1.cpp");
    assure(file, "ej1.cpp");
    cout << "name: " << file.name() << endl;
    string s;
    file.getline(s); // These work too!
    file.seekg(-200, ios::end);
    file.close();
} ///:~