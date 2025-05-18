#include <iostream>

typedef std::string text_t;

void print(const text_t& texto){
    std::cout << texto << std::endl;
}

void print() {
    std::cout << std::endl;
}

template<typename T, typename... Args>
void print(T first, Args... resto){
    std::cout<<first<<" ";
    print(resto...);
}

template<typename T>
T input(const text_t& msg) {
    T x;
    print(msg);
    std::cin>>x;
    return x;
}

template<>
text_t input<text_t>(const text_t& msg){
    text_t x;
    print(msg);
    std::getline(std::cin, x);
    return x;
}

int main(){
    text_t msg1 = input<text_t>("Digite uma mensagem de recepção pro usuário");
    text_t def1 = input<text_t>("Digite o retorno a resposta do usuário");
    text_t rsp1 = input<text_t>(msg1);
    print(def1, rsp1);
    
    return 0;
}

/*
namespace certo {
    std::string msg(){
        return "correto";
    }
}
namespace errado {
    std::string msg(){
        return "incorreto";
    }
}

int main(){
    using namespace errado;
    std::cout<<"Vc tem algo a dizer?"<<'\n';
    std::string informação;
    std::cin>>informação;
    std::cout<<"O q vc me disse está "<<certo::msg();
    
    return 0;
}


int main(){
    int i=1, x;
    cout<<"Digite um número: ";
    cin>>x;
    long y=x;
    while (i<x){
        y = i*y;
        i+=1;
    }
    cout<<"o fatorial de "<<x<<" é "<<y;
    return 0;
}


 int main(){
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, i;
    cout<<"Digite um número: ";
    cin>>x;
    if (x%2 != 0){
        cout<<x<<" é ímpar"<<'\n';
    } else {
        cout<<x<<" é par"<<'\n';
    }
    while (i<10){
        cout<<x * vet[i]<<'\n';
        i+=1;
    }
    
    return 0;
}
*/
