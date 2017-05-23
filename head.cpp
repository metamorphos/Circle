#include<iostream>
#include "head.h"
#include<fstream>
#include<ctime>
#include <stack>
#include<string>
using namespace std;
  int Question::generate()			//输入类 
{
	return answer;
}
Question::Question()
{
	answer=0;
}

void Question::oper(inta,intb)
{
	if(i==1)
		answer++;
	else
		answer++;
}

void RandomGeneration::RandomNumber()		//随机算式类
{
	srand(time(0));
	int i;
	for(i=1;i<=4;i++)
	{
		num[i]=rand()%10;
	}
}
void RandomGeneration::Randomoperation()
{
	srand(time(0));
	int choose,i;
	for(i=1;i<=3;i++)
	{
		choose=rand()%4;
    	switch(choose)
		{
          	case 0:operation[i]='+';break;
        	case 1:operation[i]='-';break;
		case 2:operation[i]='*';break;
		case 3:operation[i]='/';
		}
	}
}
intRandomGeneration::Randomexpression()
{ 
        int choosen
	srand(time(0));
	choosen=rand()%5;
}

void QuestionLib::QuestionLib(int num)			//输出类
{
        m_questionNum = num;
        m_score = 0;
}
void QuestionLib::putlanguage()
{
	cin>>language;
}
void QuestionLib::execute()
{
        switch(j)
	{
       	case 0:result=1;break;
      	case 1:result=1;break;
	case 2:result=1;break;		
	}
        return showResult；
	
}



void readwrite::readfile()		//文件读写类
{
	int i=0;
	ifstream icin;
	icin.open("(inter.language).txt");
	for(i=0;i<=4;i++)
	{
		icin>>s[i];
	}
	infile.close(); 
}

void readwrite::writefile(int n)			//读取文件
{
	ofstream ocout;
	ocout.open("out.txt",ios::app);
	ocout<<n<<endl; 
	ocout.close();
}

int main()
{
	int i=0,sum=0;
	Interaction inter;
	readwrite file;
	Calculate caculate;
	RandomGeneration random;
	cout<<"Welcom!"<<"Please choose the language you need:"<<endl;		//语言选择
	cout<<"1.中文"<<"2.英文"<<endl;
	inter.putlanguage();
	file.Language;	
	cout<<s[0];
	cin>>sum;
	readwrite.writefile(sum);
	while((i++,sum)==1)
	{
		random.RandomNumber();
		random.Randomoperation();
		random.Randomexpression();
		QuestionLib. showResult(choosen);
		if((caculate. showResult()==1)
		{
			random.put();
			cin>>answer;
			if(judge.Judgeanswer(answer,caculate.getresult())==1)
			{
				cout<<s[1];
				inter.answer(1);
			}
			else
			{
				cout<<s[2]<<resullt;
				inter.answer(0);
			}
		}
	}
	cout<<s[3]<<inter.getanswer()<<endl;
	cout<<s[4]<<inter.getanswer()<<endl;
	return 0;
}
