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
matCambridge(),
ana(),
beto(),
carla(),
logica(),
tecProg(),
gaal(),
fsi(),
socio(),
ed1()
{
    //RELACIONAMENTOS ENTRE OBJETOS DEVEM SER FEITOS ANTES DAS EXECUÇÕES (NAS CONSTRUTORAS)!!!

    inicializaUniversidades();
    inicializaDepartamentos();
    inicializaProfessores();
    inicializaAlunos();
    inicializaDisciplinas();
    

    
    //TESTE ALUNO:
}

Principal::~Principal(){

}

void Principal::inicializaUniversidades()
{
    utfpr.setNome("UTFPR");
    princeton.setNome("Universidade de Princeton");
    cambridge.setNome("Universidade de Cambridge");

}

void Principal::inicializaDepartamentos()
{
    //dá nome aos departamentos
    daeln.setNome("Departamento de Eletronica - DAELN");
    fisPrinceton.setNome("Departamento de Fisica");
    matCambridge.setNome("Departamento de Matematica");
    dainf.setNome("Departamento de Informatica - DAINF");
    damat.setNome("Departamento de Matematica - DAMAT");

    //associa as universidades aos departamentos e agrega os departamento às univesidades 
    //por meio da inclusão na lista de dptos da univ
    daeln.setUniv(&utfpr);
    fisPrinceton.setUniv(&princeton);
    matCambridge.setUniv(&cambridge);
    dainf.setUniv(&utfpr);
    damat.setUniv(&utfpr);
}

void Principal::inicializaProfessores()
{
    //constrói os objetos da classe Professor
    simao.inicializa(3, 10, 1976, "Jean Simão");
    einstein.inicializa(14, 3, 1879, "Albert Einstein");
    newton.inicializa(4, 1, 1643, "Isaac Newton");

    //associa os professores às universidades
    simao.setUniv(&utfpr);
    einstein.setUniv(&princeton);    
    newton.setUniv(&cambridge);

    //associa os professores aos departamentos
    simao.setDptoFiliado(&daeln); 
    einstein.setDptoFiliado(&fisPrinceton);
    newton.setDptoFiliado(&matCambridge);

    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&simao));
    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&einstein));
    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&newton));
}

void Principal::inicializaDisciplinas()
{
    //incializa as disciplinas
    logica.inicializa(20, "Introducao a Logica para Computacao");
    tecProg.inicializa(20, "Tecnicas de Programacao");
    gaal.inicializa(71, "Geometria Analitica e Algebra Linear");
    fsi.inicializa(10, "Fundamentos de Sistemas de Informacao");
    socio.inicializa(7, "Sociologia");
    ed1.inicializa(20, "Estrutura de Dados I");

    //agrega fortemente as disciplinas a seus respectivos departamentos e associa os departamentos a disciplina
    //via lista duplamente encadeada de disciplinas
    logica.setDptoAssociado(&dainf);
    tecProg.setDptoAssociado(&daeln);
    gaal.setDptoAssociado(&damat);
    fsi.setDptoAssociado(&dainf);
    socio.setDptoAssociado(&dainf);
    ed1.setDptoAssociado(&dainf);

    //associa os alunos incluindo-os na lista de matrícula da disciplina
    logica.incluiAluno(&ana);
    logica.incluiAluno(&beto);
    logica.incluiAluno(&carla);

    tecProg.incluiAluno(&ana);
    tecProg.incluiAluno(&beto);

    gaal.incluiAluno(&ana);
    gaal.incluiAluno(&carla);

    fsi.incluiAluno(&beto);
    fsi.incluiAluno(&carla);

    socio.incluiAluno(&ana);
}

void Principal::inicializaAlunos()
{
    ana.inicializa(4, 5, 2001, "Ana Julia Molinos");
    beto.inicializa(22, 11, 1999, "Beto da Silva");
    carla.inicializa(21, 12, 1999, "Carla Medeiros");

    ana.setRaAluno(2582694);
    beto.setRaAluno(2698341);
    carla.setRaAluno(2764893);

    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&ana));
    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&beto));
    objListaPessoas.incluiPessoa(static_cast<Pessoa*>(&carla));
}

void Principal::calculaIdades()
{
     //Comandos copiados dos slides para gerar a data atual automaticamente:
    
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

    simao.calculaIdade(diaAtual, mesAtual, anoAtual);
    einstein.calculaIdade(diaAtual, mesAtual, anoAtual);
    newton.calculaIdade(diaAtual, mesAtual, anoAtual);
}

void Principal::imprimeDadosProfs()
{
    simao.imprimeDados(); //imprime idade
    simao.imprimeNomeUnivDpto();//imprime dados de onde trabalha
    cout << endl;
    einstein.imprimeDados(); //imprime idade
    einstein.imprimeNomeUnivDpto();
    cout << endl;
    newton.imprimeDados(); //imprime idade
    newton.imprimeNomeUnivDpto();
}

void Principal::imprimeDptos()
{
    utfpr.imprimeDptos();
    cout << endl;
    princeton.imprimeDptos();
    cout << endl;
    cambridge.imprimeDptos();
}

void Principal::imprimeDisciplinas()
{
    daeln.listaDisciplinas();
    cout << endl;
    dainf.listaDisciplinas();
    cout << endl;
    damat.listaDisciplinas();
    cout << endl;
    fisPrinceton.listaDisciplinas();
    cout << endl;
    matCambridge.listaDisciplinas();
}

void Principal::imprimeAlunos()
{
    logica.listaAlunos();
    cout << endl;
    tecProg.listaAlunos();
    cout << endl;
    gaal.listaAlunos();
    cout << endl;
    fsi.listaAlunos();
    cout << endl;
    socio.listaAlunos();
    cout << endl;
    ed1.listaAlunos();
}

void Principal::executar(){

    calculaIdades();
    cout << endl;
    imprimeDadosProfs();
    cout << endl;
    imprimeDptos();
    cout << endl;
    imprimeDisciplinas();    
    cout << endl;
    imprimeAlunos();
    cout<< endl << "Lista de pessoas do sistema acadêmico:" << endl;
    objListaPessoas.listaPessoas();
    
    /*ana.calculaImprime(diaAtual, mesAtual, anoAtual);
    ana.imprimeDadosAlunos();*/
}