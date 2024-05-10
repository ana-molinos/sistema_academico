#include "minhaString.h"
#include <string.h>

MinhaString::MinhaString(const char* s):
tamanho(strlen(s))//chamada da construtora do objeto "tamanho" da classe Inteiro
{
    setString(s);
}

MinhaString::~MinhaString(){
    delete pString;
    pString = NULL;
}

void MinhaString::setString(const char* s){
    pString = new char[tamanho+1]; //instancia uma String?
    strcpy(pString, s);
}

char* MinhaString::getString(){
    return pString;
}

void MinhaString::operator=(const char* s){
    delete [] pString; //desaloca a String atual
    tamanho = strlen(s);//define o novo tamanho
    setString(s);//define a nova String
}

void MinhaString::operator=(MinhaString& s){
    operator=(s.getString());
}

bool MinhaString::operator==(MinhaString& s){
    //strcmp retorna 0 se as duas strings são iguais    
    
    if(0==strcmp(pString, s.getString()))
        return true;
    
    return false;
}

bool MinhaString::operator!=(MinhaString& s){
    if(0!=strcmp(pString, s.getString()))
        return true;

    return false;
}

char MinhaString::operator[](int i){
    return *(pString+i);
}

