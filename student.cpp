#include "student_header.cpp"

//セッター　メンバ変数に値を設定する
//ゲッター　値を取り出す

//名前のセッター
void Student::setName(string name){  //StudentクラスのsetName関数
    m_name = name;  //nameに格納した文字列をm_nameに格納する
}

//名前のゲッター
string Student::getName(){  //StudentクラスのgetName関数
    return m_name;  //returnによって返り値で返す
}

//年齢のセッター
void Student::setAge(int age){
    m_age = age;
}

//年齢のゲッター
int Student::getAge(){
    return m_age;
}

//学年のセッター
void Student::setGrade(int grade){
    m_grade = grade;
}

//学年のゲッター
int Student::getGrade(){
    return m_grade;
}

//クラスのセッター
void Student::setCls(string cls){
    m_cls = cls;
}

//クラスのゲッター
string Student::getCls(){
    return m_cls;
}

//学生の情報の表示
void Student::showInformation(){
    cout << m_name << ":" << m_grade << "年" << m_cls << "組" << m_age << "歳" << endl;
}