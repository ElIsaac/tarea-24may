#include <iostream>
using namespace std;

class Parent
{
    int i;

public:
    Parent(int ii) : i(ii)
    {
        cout << "Parent(int ii)\n";
    }
    Parent(const Parent &b) : i(b.i)
    {
        cout << "Parent(const Parent&)\n";
    }
    Parent() : i(0)
    {
        cout << "Parent()\n";
    }
    friend ostream &operator<<(ostream &os, const Parent &b)
    {
        return os << "Parent: " << b.i << endl;
    }
};

class Member
{
    int i;

public:
    Member(int ii) : i(ii)
    {
        cout << "Member(int ii)\n";
    }
    Member(const Member &m) : i(m.i)
    {
        cout << "Member(const Member&)\n";
    }
    friend ostream &operator<<(ostream &os, const Member &m)
    {
        return os << "Member: " << m.i << endl;
    }
};

class Child : public Parent
{
    int i;
    Member m;

public:
    Child(int ii) : Parent(ii), i(ii), m(ii)
    {
        cout << "Child(int ii)\n";
    }
    Child(const Child &c) : Parent(c), i(c.i), m(c.m)
    {
        cout << "Child(const Child&)\n";
    }
    friend ostream &operator<<(ostream &os, const Child &c)
    {
        return os << (Parent &)c << c.m << "Child: " << c.i << endl;
    }
};

class Nueva : public Child
{
    int i;
    Member m;

public:
    Nueva(int ii) : Child(ii), i(ii), m(ii)
    {
        cout << "Nueva(int ii)\n";
    }
    Nueva(const Nueva &n) : Child(n), i(n.i), m(n.m)
    {
        cout << "Nueva(const Nueva&)\n";
    }
    Nueva &operator=(const Nueva &n)
    {
        if (this != &n)
        {
            Child::operator=(n);
            i = n.i;
            m = n.m;
        }
        return *this;
    }
    friend ostream &operator<<(ostream &os, const Nueva &n)
    {
        return os << (Child &)n << n.m << "Nueva: " << n.i << endl;
    }
};

int main()
{
    Child c(2);
    Child c2 = c; // Calls copy-constructor
    cout << "values in c2:\n"
         << c2;

    Nueva n(3);
    cout << "calling copy-constructor:\n";
    Nueva n2 = n; // Calls copy-constructor
    cout << "values in n2:\n"
         << n2;

    Nueva n3(4);
    n3 = n2; 
    cout << "values in n3:\n"
         << n3;

    return 0;
}
