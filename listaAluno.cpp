#include "listaAluno.h"
#include <iostream> 
using namespace std;

ListaAluno::ListaAluno():
lista()
{

}

ListaAluno::~ListaAluno(){
    limpaListaAlunos();
}

void ListaAluno::incluiAluno(Aluno* pAluno){
   lista.incluiInfo(pAluno);
}

void ListaAluno::listaAlunos()
{
    Elemento<Aluno>* pAux = lista.getPrimeiro();

    if(pAux ==NULL)
        cout << "Nenhum aluno matriculado na disciplina!" << endl;
    else
    {
        while(pAux!=NULL)
        {
            cout << pAux->getInfo()->getNome() << " - RA: " << pAux->getInfo()->getRaAluno() << endl;
            pAux = pAux->getProx();
        }
    }
}

void ListaAluno::limpaListaAlunos()
{
    lista.limpaLista();
}