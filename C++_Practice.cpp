//C++
//2022/12/23開始
//実行方法 ./C++_Practice
//run code

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;  //名前空間

bool judge(int);

int main(int argc, char** argv){
    int num;
    cout << "整数の値を入力";
    cin >> num;
    if (num % 2 == 0){
        cout << num << "は偶数です" << endl;
    }
    return 0;
}