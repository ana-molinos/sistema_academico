#pragma once
#include "listaDepartamento.h"
#include "elemento.h"
using namespace std;

ListaDepartamento::ListaDepartamento():
lista()
{

}

ListaDepartamento::~ListaDepartamento()
{

}

void ListaDepartamento::incluiDpto(Departamento* pDpto)
{
    lista.incluiInfo(pDpto);
}

void ListaDepartamento::listaDptos()
{
    Elemento<Departamento>* pAux = lista.getPrimeiro();

    while(pAux != NULL)
    {
        cout << pAux->getInfo()->getNome() << "- ID: " << pAux->getInfo()->getId() << endl;
        pAux = pAux->getProx();
    }
}

void ListaDepartamento::limpaListaDptos()
{
    lista.limpaLista();
}