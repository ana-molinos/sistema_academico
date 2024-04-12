#include "universidade.h"


Universidade::Universidade(const char* nome){
    strcpy(nomeUniv, nome);
    for(int i=0; i<50; i++)//aterra o 
    {
        dptos[i]=NULL;
    }
}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    strcpy(nomeUniv, nome);
}

char* Universidade::getNome(){
    return nomeUniv;
}

void Universidade::setDpto(Departamento* pD){
    int pos = 0;
    /*
        descobre a posição de um novo dpto no vetor de dptos e evita segfault, porem, não evita que,
        quando cheio o vetor de dptos, o ultimo dpto seja sobrescrito pelo novo dpto incluido.
    */
    while(pos<50 && dptos[pos]!=NULL){
        pos++;
    }

    dptos[pos] = pD;
}

void Universidade::imprimeDptos()
{
    cout << "LISTA DE DEPARTAMENTOS - " << nomeUniv << endl;
    int i, flag_continue = 1;
    for(i=0; flag_continue && i<50; i++)
    {
        if(dptos[i]!=NULL)
            cout << dptos[i]->getNome() << endl;
        else
            flag_continue = 0;
    }
}