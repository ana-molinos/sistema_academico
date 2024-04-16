#include "listaDisciplina.h"
#include <iostream>
using namespace std;

ListaDisciplina::ListaDisciplina(){
    pElDiscPrim = NULL;
    pElDiscUlt = NULL;
}

ListaDisciplina::~ListaDisciplina(){
    ElDisciplina* paux;
    paux = pElDiscPrim;

    while(paux != NULL)
    {
        pElDiscPrim = paux->getpElDiscProx();
        delete paux;
        paux = pElDiscPrim;
    }

    pElDiscPrim = NULL;
    pElDiscUlt = NULL;
}

void ListaDisciplina::incluiDisciplina(Disciplina* pDisc){
    ElDisciplina* paux; //ponteiro auxiliar para o elemento disciplina

    //alocação dinamica de um novo objeto elemento disciplina que tem seu endereço passado para paux
    paux = new ElDisciplina(); 

    //o elemento disciplina passa a apontar para a disciplina que esta sendo incluida
    paux->setpDisc(pDisc);

    if(pElDiscPrim == NULL)
    {
        pElDiscPrim = paux;   
        pElDiscUlt = paux;
    }
    else
    {
        //o prox do ultimo elemento disciplina deve apontar para o elemento disciplina atual
        pElDiscUlt->setpElDiscProx(paux);
        //o anterior do elemento disciplina em qeustão deve receber o ultimo elemento disciplina lista
        paux->setpElDiscAnt(pElDiscUlt);
        //a ultima disciplina deve ser atualizada para a disciplina atual
        pElDiscUlt = paux;
    }
}

void ListaDisciplina::listeDisciplinas(){
    ElDisciplina* pElDisc = pElDiscPrim;

    while(pElDisc != NULL)
    {
        cout << "Nome: " << pElDisc->getNome() << " - " << "ID :" << pElDisc->getId() << endl;
        pElDisc = pElDisc->getpElDiscProx();
    }
}