#include "pessoa.h"
#include <string.h>
#include <iostream>
using namespace std;

//construtora
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome){
    inicializa(diaNa, mesNa, anoNa, nome);
}

//construtora sem parametros
Pessoa::Pessoa(){
    inicializa(0, 0, 0);
}
/*
    Aqui é possível observar a utilidade do nome ser setado por default como "", não se faz necessario
    passa-lo como parâmetro ao chamar a construtora sem parametros.
*/

Pessoa::~Pessoa(){

}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome){
    dia = diaNa;
    mes = mesNa;
    ano = anoNa;
    strcpy(nomeP, nome);
    idade = 0; //pratica de segurança
    pUniv = NULL;
    pDptoFiliado = NULL;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual){
    idade = anoAtual - ano;

    if(mesAtual < mes)
        idade--;
    else if(mesAtual == mes && diaAtual < dia)
        idade--;
}

int Pessoa::informaIdade(){
    return idade;
}

void Pessoa::imprimeDados(){
    cout << nomeP << " teria " << idade << " anos de idade." << endl;
}

void Pessoa::calculaImprime(int diaAtual, int mesAtual, int anoAtual){
    calculaIdade(diaAtual, mesAtual, anoAtual);
    imprimeDados();
}

//seta a referencia para o objeto associado (associa a universidade)
void Pessoa::setUniv(Universidade* pU){
    pUniv = pU;
}

void Pessoa::imprimeNomeUniv(){
    cout << nomeP << " - " << pUniv->getNome() << endl;
}

void Pessoa::setDptoFiliado(Departamento* pDp){
    pDptoFiliado = pDp;
}

void Pessoa::imprimeNomeUnivDpto(){
    cout << nomeP << " - " << pUniv->getNome() << ": " << pDptoFiliado->getNome() << endl;
}