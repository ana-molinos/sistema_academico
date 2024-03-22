#include "principal.h"
#include <iostream>
using namespace std;

/*
    Construtora dos objetos da classe principal: tem a chamada da construtora sem parametros
    dos objetos pessoa feita de maneira explicita (pois elas são chamadas automaticamente de maneira
    implicita pelo programa). Depois é utilizada a função inicializa.
*/
Principal::Principal():
simao(), //essa chamada garante que os ponteiros sejam anulados, por ex.
einstein(),
newton(),
utfpr(),
princeton(),
cambridge(),
daeln(),
dainf(),
damat(),
fisPrinceton(),
matCambridge()
{
    
    //RELACIONAMENTOS ENTRE OBJETOS DEVEM SER FEITOS ANTES DAS EXECUÇÕES (NAS CONSTRUTORAS)!!!
    //constrói os objetos pessoa
    simao.inicializa(3, 10, 1976, "Jean Simão");
    einstein.inicializa(14, 3, 1879, "Albert Einstein");
    newton.inicializa(4, 1, 1643, "Isaac Newton");
    
    //constrói os objetos universidade (1) e os associa aos objetos pessoa (2)
    utfpr.setNome("UTFPR"); //(1)
    simao.setUniv(&utfpr); //(2)

    princeton.setNome("Universidade de Princeton");
    einstein.setUniv(&princeton);

    cambridge.setNome("Universidade de Cambridge");
    newton.setUniv(&cambridge);

    //constroi os objs departamento (1), os agrega aos objs universidade (2), 
    //associa o obj universidade ao obj departamento criado (3) e os associa aos objs pessoa (4)
    daeln.setNome("Departamento de Eletronica - DAELN"); //(1)
    utfpr.setDpto(&daeln); //(2)
    daeln.setUniv(&utfpr); //(3)
    simao.setDptoFiliado(&daeln); //(4)
    //(os passos (2) e (3) servem para que cada univ conheça seu dpto e cada dpto conheça sua univ, respectivamente)

    fisPrinceton.setNome("Departamento de Fisica");
    princeton.setDpto(&fisPrinceton);
    fisPrinceton.setUniv(&princeton);
    einstein.setDptoFiliado(&fisPrinceton);

    matCambridge.setNome("Departamento de Matematica");
    cambridge.setDpto(&matCambridge);
    matCambridge.setUniv(&cambridge);
    newton.setDptoFiliado(&matCambridge);

    dainf.setNome("Departamento de Informatica - DAINF");//(1)
    utfpr.setDpto(&dainf);//(2)
    dainf.setUniv(&utfpr);//(3)

    damat.setNome("Departamento de Matematica - DAMAT");
    utfpr.setDpto(&damat);
    damat.setUniv(&utfpr);

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

    utfpr.imprimeDptos();
    princeton.imprimeDptos();
    cambridge.imprimeDptos();


    /*
        Para manter a boa pratica, foi implementada uma 3a função que chama calcIdade e posteriormente
        a imprimeDados, de modo a manter o desacoplamento e coesão, mas diminuir a quantidade de
        chamadas de função.
    */
}