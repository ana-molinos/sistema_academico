#include "pessoa.h"

/*
    A classe principal deve ter como atributos os objetos que seriam declarados e instanciados na main.
*/

class Principal
{
private:
    Pessoa simao;
    Pessoa einstein;
    Pessoa newton;

    Universidade utfpr;
    Universidade princenton;
    Universidade cambridge;

    Departamento daeln;
    Departamento fisPrincenton;
    Departamento matCambridge;


    int diaAtual;
    int mesAtual;
    int anoAtual;
    //as variaveis aqui nao podem ter o mesmo nome das variaveis da classe pessoa!!!!!!!!!!!!!!!

public:
    Principal(); //construtora que incializa os atributos (que eram os objetos da main)
    ~Principal(); //destrutora
    void executar(); //função que executa todos os passos que antes eram executados na main
};