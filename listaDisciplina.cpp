#include "listaDisciplina.h"
#include "elemento.h"
#include <iostream>
using namespace std;

ListaDisciplina::ListaDisciplina():
lista()
{
    
}

ListaDisciplina::~ListaDisciplina(){
    limpaListaDisciplinas();
}

void ListaDisciplina::incluiDisciplina(Disciplina* pDisc){
    lista.incluiInfo(pDisc);
}

void ListaDisciplina::listaDisciplinas(){
    Lista<Disciplina>::Elemento* pAux = lista.getPrimeiro();

    while(pAux != NULL)
    {
        cout << "Nome: " << pAux->getInfo()->getNome() << " - " << "ID :" << pAux->getInfo()->getId() << endl;
        pAux = pAux->getProx();
    }
}

void ListaDisciplina::limpaListaDisciplinas()
{
    lista.limpaLista();
}