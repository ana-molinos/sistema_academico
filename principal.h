#pragma once
#include "pessoa.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"
#include "listaPessoa.h"
#include "estagiario.h"

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

    Estagiario estag;

    int diaAtual;
    int mesAtual;
    int anoAtual;

    ListaPessoa objListaPessoas;
    /*OBS.: como meu sistema é estatico, não fica muito viável fazer isso, mas em um
            sistema dinâmico, seria interessante ter listas das pessoas, universidades,
            departamentos e por aí vai, que foram registrados. Para isso, cada vez que uma
            entidade fosse cadastrada no sistema ela deveria ser incluida na lista geral 
            correspondente ao seu tipo e nas listas específicas pertinentes*/

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