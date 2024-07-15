#pragma once
#include <iostream>
using namespace std;

template<class TIPO>

class Lista{
    public:
        class Elemento{
            private:
                TIPO* pInfo;
                Elemento* pAnt;
                Elemento* pProx;

            public:
                Elemento(){ aterraPtrs();}

                ~Elemento(){ aterraPtrs();}

                void aterraPtrs(){ pInfo = NULL; pAnt = NULL; pProx = NULL;}

                void setInfo(TIPO* info){ pInfo = info;}

                TIPO* getInfo(){ return pInfo;}

                void setAnt(Elemento* ant){ pAnt = ant;}

                Elemento* getAnt(){ return pAnt;}

                void setProx(Elemento* prox){ pProx = prox;}

                Elemento* getProx(){ return pProx;}
        };

        //implementação das funções de lista.h
        Lista() { aterraPtrs(); }

        ~Lista() { limpaLista(); }

        bool incluiElemento(Elemento* pElemento)
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

        bool incluiInfo(TIPO* pInfo)
        {
            if(pInfo != NULL)
            {
                //alocação dinamica do elemento
                Elemento* pAux = new Elemento;

                //associação do elemento com a informação a ser incluida
                pAux->setInfo(pInfo);
                incluiElemento(pAux);

                return true;
            }

            cout << "Erro na inclusao: informacao nula!" << endl;
            return false;
        }

        Elemento* getPrimeiro(){ return pPrimeiro;}

        Elemento* getUltimo(){ return pUltimo;}

        void limpaLista()
        {
            Elemento* pAux;

            while (pPrimeiro != NULL)   
            {
                pAux = pPrimeiro;
                pPrimeiro = pAux->getProx();
                delete (pAux);
            }
            
            aterraPtrs();
        }

        void aterraPtrs(){ pPrimeiro = NULL; pUltimo = NULL;}

    //necessario declarar depois da declaração da classe Elemento, senão, não reconhece o tipo Elemento
    private:
        //elemento não precisa mais de tipagem, mas não entendi muito bem o porquê...
        Elemento* pPrimeiro;
        Elemento* pUltimo;
};
