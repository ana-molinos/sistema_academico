#include "professor.h"
#include <iostream>
using namespace std;

/*
    A construtora da classe herdada deve preservar os parametros da classe base.
    Nesse exemplo, a construtora da classe Professor está reutilizando a construtora
    da classe Pessoa, passando os parametros "daqui para lá".
*/

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome, float sal, float bolsa):
Pessoa(diaNa, mesNa, anoNa, nome) //perceba que aqui é uma chamada de método, não uma declaração!
{
    pUniv = NULL;
    pDptoFiliado = NULL;
    setSalario(sal);
    setBolsa(bolsa);
}

Professor::Professor():
Pessoa()
{
    pUniv = NULL;
    pDptoFiliado = NULL;
}

//na destrutora os ponteiros são aterrados pois não serão mais utilizados
Professor::~Professor()
{
    pUniv = NULL;
    pDptoFiliado = NULL;
}

//seta a referencia para o objeto associado (associa a universidade)
void Professor::setUniv(Universidade* pU){
    pUniv = pU;
}

void Professor::imprimeNomeUniv(){
    cout << nomeP << " - " << pUniv->getNome() << endl;
}

void Professor::setDptoFiliado(Departamento* pDp){
    pDptoFiliado = pDp;
}

void Professor::imprimeNomeUnivDpto(){
    cout << nomeP << " - " << pUniv->getNome() << ": " << pDptoFiliado->getNome() << endl;
}

void Professor::informaProventos()
{
    cout << nomeP << ", professor na " << pUniv->getNome() << " recebe R$ ";
    printf("%.2f\n", salario+bolsaProj);
}

void Professor::setSalario(float sal)
{
    salario = sal;
}

float Professor::getSalario()
{
    return salario;
}

void Professor::setBolsa(float bolsa)
{
    bolsaProj = bolsa;
}

float Professor::getBolsa()
{
    return bolsaProj;
}