//============================================================================
// Name        : HelloWorld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
    float raggio;
    float piGreco = 3.14;
    float area;

    cout << "Inserire il raggio: ";
    cin >> raggio;
    cout << endl;

    area = raggio * raggio * piGreco;

    cout << "L'area del cerchio è: " << area << endl;

    int ciao[10] ;
    cout << "Indirizzo memoria di ciao: " << ciao << endl;
}
