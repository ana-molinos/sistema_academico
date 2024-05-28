#include "listaDepartamento.h"

ListaDepartamento::ListaDepartamento():
lista()
{

}

ListaDepartamento::~ListaDepartamento()
{
    limpaLista();
}

void ListaDepartamento::incluaDepartamento(Departamento* dpto)
{
    lista.incluaInfo(dpto);
}

void ListaDepartamento::listaDepartamentos()
{
    if(NULL != lista.getPrimeiro())
    {
        Elemento<Departamento>* aux = lista.getPrimeiro();

        while(NULL!=aux)
        {
            MinhaString* nomeDpto = new MinhaString(aux->getInfo()->getNome());

            cout << *nomeDpto << endl;

            aux = aux->getProximo();
        }
    }
    else
        cout << "Lista de departamentos vazia!" << endl;
    
}

void ListaDepartamento::limpaLista()
{
    lista.limpaLista();
}