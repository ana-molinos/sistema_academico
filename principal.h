#pragma once
#include "pessoa.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"

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

    Disciplina logica;
    Disciplina tecProg;
    Disciplina gaal;
    Disciplina fsi;
    Disciplina socio;
    Disciplina ed1;
    
    Aluno ana;
    Aluno beto;
    Aluno carla;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal(); //construtora que incializa os atributos (que eram os objetos da main)
    ~Principal(); //destrutora
    void inicializaUniversidades();
    void inicializaDepartamentos();
    void inicializaProfessores();
    void inicializaDisciplinas();
    void inicializaAlunos();
    void calculaIdades();
    void imprimeDadosProfs();
    void imprimeDptos();
    void imprimeDisciplinas();
    void imprimeAlunos();
    void executar(); //função que executa todos os passos que antes eram executados na main
};