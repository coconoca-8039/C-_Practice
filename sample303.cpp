#ifndef _SAMPLE_H_
#define _SAMPLE_H_

//sample.h

class Sample{
    public:  //アクセス指定子
        void setNum(int num);  //private指定されたメンバ変数に書き込む　　メンバ変数
        int getNum();  //private指定されたメンバ変数を読み取る　　メンバ関数
    private:
        int m_num;
};

#endif