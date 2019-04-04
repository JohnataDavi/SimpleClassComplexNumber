// Implementando os métodos do NumeroComplexo
#include <iostream>
#include <cmath>
#include "Numero_Complexo.h"

using namespace std;

int NumeroComplexo::cont = 0;

NumeroComplexo::NumeroComplexo(){
    this->n1 = 0;
    this->n2 = 0;
    this->i = 'i';
    this->cont++;
}

NumeroComplexo::NumeroComplexo(double v1, double v2){
    this->n1 = v1;
    this->n2 = v2;
    this->i = 'i';
    this->cont++;
}

void NumeroComplexo::Imprime(short cond)
{
    char op;
    switch(cond){
        case 0: op = '+'; break;
        case 1: op = '-'; break;
        case 2: op = '*'; break;
        case 3: op = '/'; break;
        default: op = ' ';
    }

    cout << this->n1;
    if(this->n2 != 0)
        cout << op << this->n2 << this->i;
    cout << endl;
}

void NumeroComplexo::Soma(NumeroComplexo *y)
{
    this->n1 = this->n1 + y->getN1();
    this->n2 = this->n2 + y->getN2();
}

void NumeroComplexo::Subtracao(NumeroComplexo *y)
{
    this->n1 = this->n1 - y->getN1();
    this->n2 = this->n2 - y->getN2();
}

void NumeroComplexo::Mutiplicacao(NumeroComplexo *y)
{
    this->n1 = this->n1 * y->getN1();
    this->n2 = this->n2 * y->getN2();
}

void NumeroComplexo::Divisao(NumeroComplexo *y)
{
    this->n1 = this->n1 / y->getN1();
    this->n2 = this->n2 / y->getN2();
}

void NumeroComplexo::setN1(double v1){
    this->n1 = v1;
}

void NumeroComplexo::setN2(double v2){
    this->n2 = v2;
}

void NumeroComplexo::setI(char imaginaria){
    this->i = imaginaria;
}

double NumeroComplexo::modulo(){
    return sqrt(pow(this->n1, 2) + pow(this->n2, 2));
}
double NumeroComplexo::getN1(){ return this->n1; }

double NumeroComplexo::getN2(){ return this->n2;}

char NumeroComplexo::getI(){ return this->i;}

int NumeroComplexo::getCont(){ return cont;}
