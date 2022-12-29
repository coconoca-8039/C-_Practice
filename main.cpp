//C++
//2022/12/23開始
//ファイル名をmain.cppに変更
//実行方法 ./C++_Practice
//run code

#include <iostream>
#include "student_header.cpp"
#include "student.cpp"


using namespace std;  //名前空間

int main(int argc, char** argv){
    Student s[2];  //インスタンスを生成
    
    for (int i = 0; i < 2; i++){

        cout << "---生徒" << (i + 1) << "の情報の入力---" << endl;

        string name, cls;  //名前とクラスの宣言
        int age, grade;  //年齢と学年の宣言

        cout << "名前:";
        cin >> name; 
        cout << "年齢:";
        cin >> age;
        cout << "学年:";
        cin >> grade;
        cout << "クラス:";
        cin >> cls;

        //セッターに値を設定
        //メンバ関数を呼び出している
        s[i].setName(name);
        s[i].setAge(age);
        s[i].setGrade(grade);
        s[i].setCls(cls);

    }

    //入力情報の確認
    for (int i = 0; i < 2;i++){
        cout << "----入力情報の確認----" << endl;
        cout << "名前:" << s[i].getName()  << endl;
        cout << "年齢:" << s[i].getAge() << endl;
        cout << "学年:" << s[i].getGrade() << endl;
        cout << "クラス:" << s[i].getCls() << endl;
        cout << endl;

    }

    //情報の表示
    for(int i = 0; i < 2; i++){
        s[i].showInformation();
    }
    
    return 0;

}