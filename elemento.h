#pragma once
#include <iostream>

template<class TIPO>

class Elemento{
private:
    TIPO* pInfo;
    Elemento<TIPO>* pAnt;
    Elemento<TIPO>* pProx;

public:
    Elemento();
    ~Elemento();
    void aterraPtrs();
    void setInfo(TIPO* info);
    TIPO* getInfo();
    void setAnt(Elemento<TIPO>* ant);
    Elemento<TIPO>* getAnt();
    void setProx(Elemento<TIPO>* prox);
    Elemento<TIPO>* getProx();
};

template<class TIPO>
Elemento<TIPO>::Elemento()
{
    aterraPtrs();
}

template<class TIPO>
Elemento<TIPO>::~Elemento()
{
    aterraPtrs();
}

template<class TIPO>
void Elemento<TIPO>::aterraPtrs()
{
    pInfo = NULL;
    pAnt = NULL;
    pProx = NULL;
}

template<class TIPO>
void Elemento<TIPO>::setInfo(TIPO* info)
{
    pInfo = info;
}

template<class TIPO>
TIPO* Elemento<TIPO>::getInfo()
{
    return pInfo;
}

template<class TIPO>
void Elemento<TIPO>::setAnt(Elemento<TIPO>* ant)
{
    pAnt = ant;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnt()
{
    return pAnt;
}

template<class TIPO>
void Elemento<TIPO>::setProx(Elemento<TIPO>* prox)
{
    pProx = prox;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProx()
{
    return pProx;
}