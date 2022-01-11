#include <iostream>

using namespace std;

//ça marche avec unt aussi, mais en ajoutant un const ca nous assure que les valeurs sont inchangable
// c'est aussi possible d'envoyer des réferences
// const int&a, const int&
// si on utilise pas la réference, ca veut dire a dans la fonction est une copie de la valeur a
// si c'est une réference de la vraie valeur
int add(const int &a, int b)
{
    // int a1 = a;
    // int b1 = b;
    // return a1 + b1;
    return a + b;
}

void add_to(int &a, const int b)
{
    a += b;
}

int main(int argc, char const *argv[])
{
    const int x{10};
    int y = add(x, x);
    // int y = add(y=x, x);
    add_to(y, 22);
    cout << y << endl;
    return 0;
}


//Trois passage possibles:
//passage par copie
//passage par une réference
//passage par une const réference