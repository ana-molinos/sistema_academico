#include "disciplina.h"
#include <string.h>
#include <iostream>
using namespace std;

Disciplina::Disciplina(int n_id, const char* nome_disc, int n_a, int qtdd_a){
    inicializa(n_id, nome_disc);
    n_alunos = n_a;
    qtdd_alunos = qtdd_a;
    pDptoAssociado = NULL;
    pElAlunoPrim = NULL;
    pElAlunoUlt = NULL;
}

Disciplina::~Disciplina(){
    ElAluno* paux;
    paux = pElAlunoPrim;

    while(paux!=NULL)
    {
        pElAlunoPrim = paux->getpElAlunoProx();
        delete paux;
        paux = pElAlunoPrim;
    }
    
    pDptoAssociado = NULL;
    pElAlunoPrim = NULL;
    pElAlunoUlt = NULL;
}

void Disciplina::inicializa(int n_id, const char* nome_disc){
    id = n_id;
    strcpy(nome, nome_disc);
}

void Disciplina::setId(int n_id){
    id = n_id;
}

int Disciplina::getId(){
    return id;
}

void Disciplina::setNome(const char* nome_Disc){
    strcpy(nome, nome_Disc);
}

char* Disciplina::getNome(){
    return nome;
}

int Disciplina::getQtddAlunos(){
    return qtdd_alunos + 1;
}

void Disciplina::setDptoAssociado(Departamento* pDpto){
    pDptoAssociado = pDpto;

    pDpto->incluiDisciplina(this);
    //chama o método inclui disciplina do departamento referenciado passando como parametro o endereço
    //do objeto disciplina que está sendo executado no momento (this é um ponteiro de alto nível);
}

Departamento* Disciplina::getDptoAssociado()
{
    return pDptoAssociado;
}

void Disciplina::incluiAluno(Aluno* pAluno){
    //cria auxiliar e aponta para o elemento aluno
    ElAluno* paux;
    paux = new ElAluno();

    //o elemento aluno passa a apontar para o aluno que sera incluido na lista
    paux->setpAluno(pAluno);

    if(qtdd_alunos<n_alunos){
        if(pElAlunoPrim==NULL)
        {
            pElAlunoPrim = paux;
            pElAlunoUlt = paux;
        }
        else
        {
            pElAlunoUlt->setpElAlunoProx(paux);
            paux->setpElAlunoAnt(pElAlunoUlt);
            pElAlunoUlt = paux;
        }
        qtdd_alunos++;
    }
    else
        cout << "Lista de alunos cheia, impossível incluir alunos!" << endl;
}

void Disciplina::listaAlunos(){
    ElAluno* paux;
    paux = pElAlunoPrim;

    if(paux ==NULL)
        cout << "Nenhum aluno matriculado na disciplina " << nome << "!" << endl;
    else
    {
        cout << "LISTA DE ALUNOS DA DISCIPLINA " << nome << endl;
        cout << qtdd_alunos << " alunos matriculados." << endl;
        while(paux!=NULL)
        {
            cout << paux->getNome() << " - RA: " << paux->getRa() << endl;
            paux = paux->getpElAlunoProx();
        }
    }
}