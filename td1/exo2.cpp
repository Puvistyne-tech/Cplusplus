#include <iostream>

using namespace std;

int main()
{
    short s0;
    const short s1=1; // il faut initialization // une erreur de compilation normale

    const int i1 = 2;

    bool b2{false};
    //bool b3{i1};// le type n'est pas le même
    bool b3{true};// le type n'est pas le même//c'est une warrning
    // int -32 bit , un bool - 1bit
    //
    bool b4;

    unsigned u5{0x10};
    unsigned short us6 = -10;//UB
    unsigned long ul7{b3 + u5 + us6};

    char c8{'a'};
    char c9 = -10;

    double d10{i1};
    double &d11{d10};
    //double &d12;// ce n'est pas initialisé
    const double d13{.0f};

    int i14 = i1;
    // int &i15 = i1;// unchangement de const int vers un int
    // int &i16 = b2;
    const int &i17{i14};

    cout<<s0<<endl; //undefined
    cout<<ul7<<endl; //undefined

    return 0;
}
