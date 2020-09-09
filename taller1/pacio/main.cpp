#include <iostream>
#include <string>
#include <vector>
#include "taller.h"

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    cout << estaOrdenado(v);
    mostrarVector(v, cout);
    return 0;
}
