#include "principal.h"
#include <iostream>
using namespace std;

/*
    Construtora dos objetos da classe principal: tem a chamada da construtora sem parametros
    dos objetos pessoa feita de maneira explicita (pois elas são chamadas automaticamente de maneira
    implicita pelo programa). Depois é utilizada a função inicializa.
*/
Principal::Principal():

simao(),
einstein(),
newton(),
utfpr(),
princenton(),
cambridge(),
daeln(),
fisPrincenton(),
matCambridge()
{
    simao.inicializa(3, 10, 1976, "Jean Simão");
    einstein.inicializa(14, 3, 1879, "Albert Einstein");
    newton.inicializa(4, 1, 1643, "Isaac Newton"); //POR QUE NÃO USAR A CONSTRUTORA DA CLASSE PESSOA?

    utfpr.setNome("UTFPR"); //está passando o atributo nome do objeto
    simao.setUniv(&utfpr);

    princenton.setNome("Universidade de Princeton");
    einstein.setUniv(&princenton);

    cambridge.setNome("Universidade de Cambridge");
    newton.setUniv(&cambridge);

    daeln.setNome("Departamento de Eletronica - DAELN");
    utfpr.setDpto(&daeln);
    simao.setDptoFiliado(&daeln);

    fisPrincenton.setNome("Departamento de Fisica");
    princenton.setDpto(&fisPrincenton);
    einstein.setDptoFiliado(&fisPrincenton);

    matCambridge.setNome("Departamento de Matematica");
    cambridge.setDpto(&matCambridge);
    newton.setDptoFiliado(&matCambridge);

    /*
        O que é feito aqui: o nome do departamento é configurado utilizando o metodo da classe dpto,
        (utilizando o objeto dainf). Enquanto que, o objeto dainf é associado ao objeto simao por 
        meio do método da classe pessoa (utilizando o objeto simao). LOGO: METODO DA CLASSE X É 
        UTILIZADO APENAS PELO OBJETO DA CLASSE X, NÃO FAZER CONFUSÃO!
    */
    

    /*
        Associa o objeto utfpr ao objeto simao via passagem por referencia do endereço do objeto utfpr.
        setUniv tem um ponteiro como parametro, entao precisa receber um endereço!
    */
}
/*
    Aqui fica mais claro a utilidade do metodo inicializa, mas as construtoras perdem sua utilidade
    desse ponto de vista?
*/

Principal::~Principal(){

}

void Principal::executar(){
    /*cout << "Informe dia, mes e ano atuais:" << endl;
    cin >> diaAtual;
    cin >> mesAtual;
    cin >> anoAtual;*/

    /*
        Comandos copiados dos slides para gerar a data atual automaticamente, no lugar de pedir ao
        usuário.
    */
    
    // O ponteiro 'local' é do tipo struct tm, que contém data e hora.
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);

    // Retorna o dia.
    diaAtual = local->tm_mday;

    // Retorna o mês.
    mesAtual = local->tm_mon + 1;

    // Retorna o ano.
    // É necessário acrescentar 1900, pois o sistema retorna a partir desse ano.
    // Ao invés de 2009, retorna 109.
    anoAtual = local->tm_year + 1900;

    simao.calculaImprime(diaAtual, mesAtual, anoAtual);
    einstein.calculaImprime(diaAtual, mesAtual, anoAtual);
    newton.calculaImprime(diaAtual, mesAtual, anoAtual);

    simao.imprimeNomeUnivDpto();
    einstein.imprimeNomeUnivDpto();
    newton.imprimeNomeUnivDpto();

     

     /*
      O professor implementou a função para imprimir os dados dentro da da função que calcula a idade;
      Essa, por sua vez, está sendo chamada dentro da função construtora. Logo, na função executar,
      ele precisa apenas declarar os objetos simao, einstein e newton.
    */

    /*
      No entanto, é considerada uma boa prática a implementação de um método específico para cada
      atividade a ser executada. E além disso, a criação do objeto antes da sua execução.
    */

    /*
        Para manter a boa pratica, foi implementada uma 3a função que chama calcIdade e posteriormente
        a imprimeDados, de modo a manter o desacoplamento e coesão, mas diminuir a quantidade de
        chamadas de função.
    */
}