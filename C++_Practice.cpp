//C++
//2022/12/23開始
//実行方法 ./C++_Practice
//run code

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;  //名前空間

namespace A {
    int power;
}
namespace B {
    int power;
}

//関数のプロトタイプ宣言
void funcA();
void funcB();

int main(int argc, char** argv){

    A::power = 20;  //名前空間Aへ代入
    B::power = 30;  //名前空間Bへ代入
    cout << "main" << endl;
    cout << "main:A::power" << A::power << endl;
    cout << "main:B::power" << B::power << endl;
    funcA();
    funcB();
    return 0;

}

void funcA(){
    using namespace A;
    cout << "funcA" << endl;
    cout << "funcA:A::power=" << power << endl;
    cout << "funcA:B::power=" << B::power << endl;
    power = 40;
}

void funcB(){
    using namespace B;
    cout << "funcB" << endl;
    cout << "funcA:A::power=" << A::power << endl;
    cout << "funcA:B::power=" << power << endl; 
}       