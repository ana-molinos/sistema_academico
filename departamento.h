#pragma once

class Departamento{

private:
    int id;
    char nome[100];

public:
    Departamento(int n_id = 0, const char* nome_dpto = "");
    ~Departamento();
    int getId();
    void setNome(const char* n);
    char* getNome();

};