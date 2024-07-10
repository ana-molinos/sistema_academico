#pragma once
#include <string.h>

class Pessoa
{

protected:
    int dia;
    int mes;
    int ano;
    int idade;
    char nomeP[50];

    /*
        Ponteiros que estabelecem a relacação de associação entre o objeto pessoa e os objetos
        universidade e departamento.
        Uma referência aos objeto associados.
    */

public:
    Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = ""); //construtora
    /*
      Aqui a construtora está utilizando um valor por default para o nome, que seria uma string vazia;
      Isso permite que o usuario possa chamar a construtora sem passar o parametro nome
    */

    Pessoa(); //construtora sem parâmetros
    /*
       Caso a construtora original tenha todos os parametros configurados com valores por default,
       a construtora sem parâmetros não se faz necessária.
       P.S.: a função construtora sem parametros é implementada pelo próprio compilador caso isso
             não seja feito explicitamente no código. Por isso a importância da sua implentação!
    */

    ~Pessoa();//destrutora

    void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
    /*
        Aqui foi criada uma função inicializa para ser utilizada como ferramenta pelas funções
        construtoras, que irao incializar de diferentes maneiras os objetos. (ainda não entendi bem)
        P.S.: a incializa é utilizada pela classe principal.
    */
    void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
    int informaIdade(); //getIdade
    void imprimeDados();
    void calculaImprime(int diaAtual, int mesAtual, int anoAtual);
    char* getNome();
    virtual void informaProventos();
};