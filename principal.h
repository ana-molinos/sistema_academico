#pragma once
#include "pessoa.h"
#include "professor.h"
#include "aluno.h"

/*
    A classe principal deve ter como atributos os objetos que seriam declarados e instanciados na main.
*/

class Principal
{
private:
    Professor simao;
    Professor einstein;
    Professor newton;

    Universidade utfpr;
    Universidade princeton;
    Universidade cambridge;

    Departamento daeln;
    Departamento dainf;
    Departamento damat;
    Departamento fisPrinceton;
    Departamento matCambridge;

    Aluno ana;

    int diaAtual;
    int mesAtual;
    int anoAtual;
    //as variaveis aqui nao podem ter o mesmo nome das variaveis da classe pessoa!!!!!!!!!!!!!!!

public:
    Principal(); //construtora que incializa os atributos (que eram os objetos da main)
    ~Principal(); //destrutora
    void executar(); //função que executa todos os passos que antes eram executados na main
};