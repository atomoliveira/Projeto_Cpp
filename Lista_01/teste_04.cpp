//Faça um programa em que aloque  uma determinada expressão//

#include <iostream>
#include "pilhaalocasequencial.h"

using namespace std;

int main()
{
    cout << "ANALISE DE EXPRESSAO" << endl;
    Pilha<char> p(50);
    string expressao; //expressao aritmetica
    char s; //simbolo
    unsigned i=0;
    bool valid = true;
    cout<<"digite a expressao:";
    getline(cin,expressao);
    cout<<"Digitada:"<<expressao<<" Tamanho: "<<expressao.size()<<endl;
    //cin.ignore();
    while (i < expressao.size()){
        s=expressao[i];
        //s=expressao.at(i);
        if(s=='(' || s=='[' || s=='{'){
            p.empilha(s);
        }
        else{
            if (s==')' || s==']' || s=='}'){
                if(p.pilhavazia()){
                    valid=false;
                    break;
                }
                else{
                   if(s==')' && p.elementodotopo()=='('){
                        cout<<p.desempilha()<<endl;
                   }
                   else{
                        if(s==']' && p.elementodotopo()=='['){
                            cout<<p.desempilha()<<endl;
                        }
                        else{
                            if(s=='}' && p.elementodotopo()=='{'){
                                cout<<p.desempilha()<<endl;
                            }
                            else{
                                break;
                            }
                        }
                   }
                }
            }
        }
        i++;
    }
    if(p.pilhavazia() && valid){
        cout<<"a expressao: "<<expressao<<" estah correta!!!"<<endl;
    }
    else{
        cout<<"a expressao: "<<expressao<<" NAO estah correta!!!"<<endl;
    }
    return 0;
}
