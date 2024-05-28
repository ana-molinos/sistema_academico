#include "listaDisciplina.h"
#include <iostream>
using namespace std;

ListaDisciplina::ListaDisciplina(){
    pDiscPrim = NULL;
    pDiscUlt = NULL;
}

ListaDisciplina::~ListaDisciplina(){
    Elemento<Disciplina>* paux;
    paux = pDiscPrim;

    while(paux != NULL)
    {
        pDiscPrim = paux->getProximo();
        delete paux;
        paux = pDiscPrim;
    }

    pDiscPrim = NULL;
    pDiscUlt = NULL;
}

void ListaDisciplina::incluiDisciplina(Disciplina* pDisc){
    Elemento<Disciplina>* paux; //ponteiro auxiliar para o elemento disciplina

    //alocação dinamica de um novo objeto elemento disciplina que tem seu endereço passado para paux
    paux = new Elemento<Disciplina>(); 

    //o elemento disciplina passa a apontar para a disciplina que esta sendo incluida
    paux->setInfo(pDisc);

    if(pDiscPrim == NULL)
    {
        pDiscPrim = paux;   
        pDiscUlt = paux;
    }
    else
    {
        //o prox do ultimo elemento disciplina deve apontar para o elemento disciplina atual
        pDiscUlt->setProximo(paux);
        //o anterior do elemento disciplina em qeustão deve receber o ultimo elemento disciplina lista
        paux->setAnterior(pDiscUlt);
        //a ultima disciplina deve ser atualizada para a disciplina atual
        pDiscUlt = paux;
    }
}

void ListaDisciplina::listeDisciplinas(){
    Elemento<Disciplina>* pDisc = pDiscPrim;

    while(pDisc != NULL)
    {
        cout << "Nome: " << pDisc->getInfo()->getNome() << " - " << "ID :" << pDisc->getInfo()->getId() << endl;
        pDisc = pDisc->getProximo();
    }
}