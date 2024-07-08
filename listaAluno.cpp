#include "listaAluno.h"
#include <string.h>
#include <iostream> 
using namespace std;

ListaAluno::ListaAluno(int n_a, int q_a)
{
    n_alunos = n_a;
    qtdd_alunos = q_a;
    
    pElAlunoPrim = NULL;
    pElAlunoUlt = NULL;
}

ListaAluno::~ListaAluno(){
    ElAluno* paux;
    paux = pElAlunoPrim;

    while(paux!=NULL)
    {
        pElAlunoPrim = paux->getpElAlunoProx();
        delete paux;
        paux = pElAlunoPrim;
    }

    pElAlunoPrim = NULL;
    pElAlunoUlt = NULL;
}

void ListaAluno::incluiAluno(Aluno* pAluno){
    if(qtdd_alunos<n_alunos){
        //cria auxiliar e aponta para o elemento aluno
        ElAluno* paux;
        paux = new ElAluno();

        //o elemento aluno passa a apontar para o aluno que sera incluido na lista
        paux->setpAluno(pAluno);

        if(pElAlunoPrim==NULL)
        {
            pElAlunoPrim = paux;
            pElAlunoUlt = paux;
        }
        else
        {
            pElAlunoUlt->setpElAlunoProx(paux);
            paux->setpElAlunoAnt(pElAlunoUlt);
            pElAlunoUlt = paux;
        }
        qtdd_alunos++;
    }
    else
        cout << "Lista de alunos cheia, impossível incluir aluno!" << endl;
}

void ListaAluno::listeAlunos()
{
    ElAluno* paux;
    paux = pElAlunoPrim;

    if(paux ==NULL)
        cout << "Nenhum aluno matriculado na disciplina!" << endl;
    else
    {
        cout << qtdd_alunos << " alunos matriculados." << endl;
        while(paux!=NULL)
        {
            MinhaString* nome = new MinhaString(paux->getNome());

            cout << *nome << " - RA: " << paux->getRa() << endl;
            paux = paux->getpElAlunoProx();
        }
    }
}