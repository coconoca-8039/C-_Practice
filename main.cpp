//C++
//2022/12/23開始
//実行方法 ./C++_Practice
//run code

#include <iostream>
#include "car.cpp"

using namespace std;  //名前空間

int main(int argc, char** argv){
    Car car;
    car.speed = 100;
    car.drive(1.5);
    return 0;
}

