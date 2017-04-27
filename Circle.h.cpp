#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
      Circle()//定义圆的类函数
      void Circle(double R);//构造函数
      double Area();//求面积函数
private:
      double R;
      double S;
}；

#endif//防止重复编译
