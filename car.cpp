#include "car1.cpp"
#include <iostream>

using namespace std;

//メンバー関数
//関数名の頭にクラス名を付け::で挟む
void Car::drive(double hour){
    cout << "時速" << speed << "kmで" << hour << "時間走行" << endl;
    cout << speed * hour << "km移動しました" << endl;
}