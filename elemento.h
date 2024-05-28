#pragma once
#include <stdlib.h>

template<class TIPO>

class Elemento{
private:
    Elemento<TIPO>* proximo;
    Elemento<TIPO>* anterior;
    TIPO* info;

public:
    Elemento();
    ~Elemento();
    void inicializa();
    void setProximo(Elemento<TIPO>* prox);
    Elemento<TIPO>* getProximo();
    void setAnterior(Elemento<TIPO>* ant);
    Elemento<TIPO>* getAnterior();
    void setInfo(TIPO* i);
    TIPO* getInfo();
};

template<class TIPO>
Elemento<TIPO>::Elemento(){
    inicializa();
}

template<class TIPO>
Elemento<TIPO>::~Elemento(){
    inicializa();
}

template<class TIPO>
void Elemento<TIPO>::inicializa()
{
    proximo = NULL;
    anterior = NULL;
    info = NULL;
}

template<class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* prox)
{
    proximo = prox;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo()
{
    return proximo;
}

template<class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* ant)
{
    anterior = ant;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior()
{
    return anterior;
}

template<class TIPO>
void Elemento<TIPO>::setInfo(TIPO* i)
{
    info = i;
}

template<class TIPO>
TIPO* Elemento<TIPO>::getInfo()
{
    return info;
}