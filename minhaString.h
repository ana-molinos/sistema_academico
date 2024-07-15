#pragma once
#include <iostream>
#include <string.h>
using namespace std;

namespace mstr
{
    class MinhaString{
    private:
        int tamanho;
        char* pString;

        void setString(const char* s);
        //const char pois a intenção é que s não seja alterada de nenhum modo, para manter a segurança
        //em relacão a informação passada pelo usuario!

    public:
        MinhaString(const char* s = "");
        ~MinhaString();
        char* getString();
        void operator = (const char* s);
        //Permite que uma string seja atribuída a um objeto da classe MinhaString
        void operator = (MinhaString& s);
        //Permite que a string de outro objeto MinhaString seja atribuída a um objeto da classe MinhaString
        bool operator == (MinhaString& s);//Passagem por ref. escondida (&)
        //Compara dois objetos da classe MinhaString e diz se são iguais
        bool operator != (MinhaString& s);
        //Compara dois objetos da classe MinhaString e diz se são diferentes
        char operator [] (int i);
        //Retorna o caracter da posição i
        
    };

    inline ostream& operator<<(ostream& saida, MinhaString& s){
        saida << s.getString();
        return saida;
    }
    //A sobrecarga do operador << necessita de 2 parâmetros, por isso, a função é declarada e implementada
    //diretamente no cabeçalho da classe.
    //ostream& é o tipo do retorno (pois consiste em passagem de parâmetro por referência escondida e
    //e o operador << faz parte do fluxo de saída [output stream = ostream])

    //implementação retirada do livro
    inline istream& operator >> (istream& entrada, MinhaString& s){
        entrada >> s;
        return entrada;
    }

    //Concatena duas strings (junta as duas strings presentes em dois objetos diferentes da classe
    //MinhaString) - usar strcat [char *strcat( char *dest, const char *src );]
    inline const char* operator + (MinhaString& s1, MinhaString& s2){
        
        MinhaString* s3 = new MinhaString;

        (*s3) = s1;

        return strcat(s3->getString(), s2.getString());
    }

    /*  MinhaString* minhaString = new MinhaString;

        minhaString->operator=(aux);

        return minhaString;*/
} // namespace mstr

