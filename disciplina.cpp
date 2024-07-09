#include "disciplina.h"
#include "departamento.h"
#include <string.h>
#include <iostream>
using namespace std;

Disciplina::Disciplina(int n_id, const char* nome_disc):
objListaAlunos()
{
    inicializa(n_id, nome_disc);
    pDptoAssociado = NULL;
}

Disciplina::~Disciplina(){
    pDptoAssociado = NULL;
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
    objListaAlunos.incluiAluno(pAluno);
}

void Disciplina::listaAlunos(){
   cout << "LISTA DE ALUNOS DA DISCIPLINA " << nome << endl;
   objListaAlunos.listaAlunos();
}