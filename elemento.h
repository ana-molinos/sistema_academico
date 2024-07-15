#pragma once
#include <iostream>

template<class TIPO>

class Elemento{
    private:
        TIPO* pInfo;
        Elemento<TIPO>* pAnt;
        Elemento<TIPO>* pProx;

    public:
        Elemento(){ aterraPtrs();}

        ~Elemento(){ aterraPtrs();}

        void aterraPtrs(){ pInfo = NULL; pAnt = NULL; pProx = NULL;}

        void setInfo(TIPO* info){ pInfo = info;}

        TIPO* getInfo(){ return pInfo;}

        void setAnt(Elemento<TIPO>* ant){ pAnt = ant;}

        Elemento<TIPO>* getAnt(){ return pAnt;}

        void setProx(Elemento<TIPO>* prox){ pProx = prox;}

        Elemento<TIPO>* getProx(){ return pProx;}
};