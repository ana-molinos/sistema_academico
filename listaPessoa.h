#pragma once
#include "lista.h"
#include "pessoa.h"

class ListaPessoa{
private:
    Lista<Pessoa> lista;

public:
    ListaPessoa();
    ~ListaPessoa();
    void incluiPessoa(Pessoa* pPessoa);
    void listaPessoas();
    void limpaListaPessoas();
    void informaProventos();
};