// Código de definição : Numero_Complexo.h
# ifndef NUMERO_COMPLEXO_H
# define NUMERO_COMPLEXO_H

class NumeroComplexo{
private:
    static int cont;
    double n1, n2;
    char i;

public:
    NumeroComplexo();
    NumeroComplexo(double, double);
    void Imprime(short);
    void Soma(NumeroComplexo*);
    void Subtracao(NumeroComplexo*);
    void Divisao(NumeroComplexo*);
    void Mutiplicacao(NumeroComplexo*);
    double modulo();
    void setN1(double);
    void setN2(double);
    void setI(char);
    double getN1();
    double getN2();
    char getI();
    int getCont();


};
#endif
