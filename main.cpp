//C++
//2022/12/23開始
//ファイル名をmain.cppに変更
//実行方法 ./C++_Practice
//run code

#include <iostream>
#include "header1.cpp"

using namespace std;  //名前空間

int main(int argc, char** argv){
    Car car;
    car.speed = 100;  //メンバ変数への代入
    car.drive(1.5);  //メンバ関数の利用 -> car.cpp

    Car taxi;
    taxi.speed = 120;
    taxi.drive(2);

    return 0;
}

