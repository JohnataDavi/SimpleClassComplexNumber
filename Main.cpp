#include <iostream>
#include "Numero_Complexo.h"

using namespace std;

int main()
{
    NumeroComplexo *x = new NumeroComplexo(2.55, 3.99);
    NumeroComplexo *y = new NumeroComplexo(3.5, 1.25);
    NumeroComplexo *z = new NumeroComplexo(13.5, 8.25);

    cout << "Numero complexo x  : ";
    x->Imprime(10);
    cout << "Numero complexo y  : ";
    y->Imprime(10);

    x->Soma(y);
    cout << "\nNumero x SOMADO ao y       : ";
    x->Imprime(0);

    x->Subtracao(y);
    cout << "Numero x SUBTRAIDO pelo y  : ";
    x->Imprime(1);

    x->Mutiplicacao(y);
    cout << "Numero x MUTIPLICADO ao y  : ";
    x->Imprime(2);

    x->Divisao(y);
    cout << "Numero x DIVIDIDO pelo y   : ";
    x->Imprime(3);

    cout << "\nModulo do numero complexo x: " << x->modulo();
    cout << "\nQuantidade de objetos instanciados: " << x->getCont();
    cout << endl;

    return 0;
}
