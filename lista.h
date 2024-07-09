#pragma once
#include <iostream>
#include "elemento.h"
using namespace std;

template<class TIPO>

class Lista{
private:
    Elemento<TIPO>* pPrimeiro;
    Elemento<TIPO>* pUltimo;

public:
    Lista();
    ~Lista();
    bool incluiElemento(Elemento<TIPO>* pElemento);
    bool incluiInfo(TIPO* pInfo);
    Elemento<TIPO>* getPrimeiro();
    Elemento<TIPO>* getUltimo();
    void limpaLista();
    void aterraPtrs();
};

template<class TIPO>
Lista<TIPO>::Lista()
{
    aterraPtrs();
}

template<class TIPO>
Lista<TIPO>::~Lista()
{
    limpaLista();
}

template<class TIPO>
bool Lista<TIPO>::incluiElemento(Elemento<TIPO>* pElemento)
{
    if(pElemento != NULL)
    {
        if(pPrimeiro == NULL)
        {
            pPrimeiro = pElemento;
            pUltimo = pElemento;
        }
        else
        {
            pUltimo->setProx(pElemento);//o ultimo atual passa a apontar para o elemento incluido
            pElemento->setAnt(pUltimo); //o elemento incluido aponta para o ultimo atual
            pUltimo = pElemento; //o ultimo é atualizado com o elemento incluido
        }

        return true;
    }
    
    cout << "Erro na inclusao: elemento nulo!" << endl;
    return false;
}

template<class TIPO>
bool Lista<TIPO>::incluiInfo(TIPO* pInfo)
{
    if(pInfo != NULL)
    {
        //alocação dinamica do elemento
        Elemento<TIPO>* pAux = new Elemento<TIPO>;

        //associação do elemento com a informação a ser incluida
        pAux->setInfo(pInfo);
        incluiElemento(pAux);

        return true;
    }

    cout << "Erro na inclusao: informacao nula!" << endl;
    return false;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrimeiro()
{
    return pPrimeiro;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getUltimo()
{
    return pUltimo;
}

template<class TIPO>
void Lista<TIPO>::limpaLista()
{
    Elemento<TIPO>* pAux;

    while (pPrimeiro != NULL)   
    {
        pAux = pPrimeiro;
        pPrimeiro = pAux->getProx();
        delete (pAux);
    }
    
    aterraPtrs();
}

template<class TIPO>
void Lista<TIPO>::aterraPtrs()
{
    pPrimeiro = NULL;
    pUltimo = NULL;
}