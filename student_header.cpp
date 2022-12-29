#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>

using namespace std;

//メンバ変数とメンバ関数の宣言を記述
//メンバ変数はカプセル化のためにprivate
//それぞれにpublicなゲッターとセッターを用意する

class Student{   

private:  //アクセス指定子
    string m_name;  //生徒の名前
    int m_age;  //年齢 
    int m_grade;  //学年
    string m_cls;  //クラス

public:  //アクセス指定子
    void setName(string name);  //名前のセッター
    string getName();   //名前のゲッター
    void setAge(int age );  //年齢のセッター
    int getAge();  //年齢のゲッター
    void setGrade(int grade);  //学年のセッター
    int getGrade();  //学年のゲッター
    void setCls(string cls);  //クラスのセッター
    string getCls();  //クラスのゲッター
    void showInformation();  //学生情報の開示
};

#endif