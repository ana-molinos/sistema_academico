#include "listaPessoa.h"
#include "elemento.h"
#include <iostream>
using namespace std;

ListaPessoa::ListaPessoa():
lista()
{

}

ListaPessoa::~ListaPessoa()
{
    limpaListaPessoas();
}

void ListaPessoa::incluiPessoa(Pessoa* pPessoa)
{
    lista.incluiInfo(pPessoa);
}

void ListaPessoa::listaPessoas()
{
    Elemento<Pessoa>* pAux = lista.getPrimeiro();

    while(pAux != NULL)
    {
        cout << pAux->getInfo()->getNome() << endl;
        pAux = pAux->getProx();
    }
}

void ListaPessoa::limpaListaPessoas()
{
    lista.limpaLista();
}

void ListaPessoa::informaProventos()
{
    Elemento<Pessoa>* pAux = lista.getPrimeiro();

    while(pAux != NULL)
    {
        pAux->getInfo()->informaProventos();
        pAux = pAux->getProx();
    }
}