#include"Circle.h"
#define pi 3.1415926
using namespace std;


Circle::Circle()
{
        R=0;
        S=0;
 }//构造圆的类函数
Circle::Circle(double R)
{
        count << "Please input radius of the circle:";
        cin >> R;
}//圆半径输入函数
double Circle::Area()
{
         S=pi*R*R;
         count<<"Please output area of the circle:"<<S<<endl;
         return S;
}//圆面积输出函数

