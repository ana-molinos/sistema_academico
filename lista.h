#pragma once
#include "elemento.h"
#include <iostream>
using namespace std;

template<class TIPO>

class Lista{
private:
    Elemento<TIPO>* primeiro;
    Elemento<TIPO>* ultimo;

public:
    Lista();
    ~Lista();
    void inicializa();
    bool incluaElemento(Elemento<TIPO>* e);
    bool incluaInfo(TIPO* info);
    void limpaLista();
    Elemento<TIPO>* getPrimeiro();
    Elemento<TIPO>* getUltimo();
};

template <class TIPO>
Lista<TIPO>::Lista()
{
    inicializa();
}

template <class TIPO>
Lista<TIPO>::~Lista()
{
    limpaLista();
}

template <class TIPO>
void Lista<TIPO>::inicializa()
{
    primeiro = NULL;
    ultimo = NULL;
}

//incluaInfo é chamado na classe de interesse, e, após associar a info
//a um elemento, chama incluaElemento() 
template <class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO* i)
{
    if(NULL!=i)
    {
        Elemento<TIPO>* elemento = new Elemento<TIPO>();
        elemento->setInfo(i);
        incluaElemento(elemento); 
        return true;
    }
    
    cout << "Erro na inclusão: informação vazia!" << endl;
    return false;
}

template <class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento<TIPO>* e)
{
    if(NULL!=e)
    {
        if(NULL==primeiro)
        {
            primeiro = e;
            ultimo = e;
        }
        else
        {
            ultimo->setProximo(e);
            e->setAnterior(ultimo);
            ultimo = e;
        }

        return true;
    }

    cout << "Erro na inclusão: elemento vazio!" << endl;
    return false;
}

template <class TIPO>
void Lista<TIPO>::limpaLista()
{
    //precisa incluir o algoritmo que desfaz a lista
    Elemento<TIPO>* aux = primeiro;

    while(aux!=NULL)
    {
        primeiro = primeiro->getProximo();
        delete(aux);
        aux = primeiro;
    }
    
    inicializa();
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrimeiro()
{
    return primeiro;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getUltimo()
{
    return ultimo;
}