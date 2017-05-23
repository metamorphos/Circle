#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
using namespace std;
class Question
{
public:
    Question();
    void generate(); // 随机生成题目，即生成有效随机数赋给成员变量;
    int answer(); // 模拟答题过程，并返回答题所得分数;
private:
    unsigned int a; // 题目的左操作数;
    unsigned int b; // 题目的右操作数;
    unsigned int oper; // 四则运算类型，加减乘除;
};
class RandomGeneration
{
private:
    int number;
    char operation;
public:
    void RandomNumber();//随机数字生成;
    void RandomOperation();//随机字符生成;
    void RandomExpretion();//随机算式生成;
}
class QuestionLib
{
public:
    QuestionLib(int num)
    {
        m_questionNum = num;
        m_score = 0;
    }
    void execute(); // 根据m_questionNum个数生成题目，并进行答题过程，记录答题分数;
    void showResult(); // 显示结果;
    void putLanguage();//输出用户所要求的语言; 
private:
    int m_questionNum;
    int m_score;
};
class readwrite
{
    public:
    int readfile();                        //读取题目数量；
    int writefile();                       //存储输入的题目数，表达式、正确答案及输入的答案，正确与错误题数 ；
}
#endif
