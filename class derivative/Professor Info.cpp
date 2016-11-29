#include <iostream>

using namespace std;
class BirthDate//生日类
{
protected:
    int Year,Month,Day;
public:
    BirthDate(int year,int month,int day)
    {
        Year=year;
        Month=month;
        Day=day;
    }

};
class Teacher//教师类
{
protected:
    char *Name;
    char *Sex;
    int Num;
public:
    Teacher(int num,char *name,char *sex)
    {
        Name=name;
        Sex=sex;
        Num=num;
    }

} ;
class Professor:public Teacher,public BirthDate//教授类，继承生日和教师类
{
public:
    Professor(int num,char *name,char *sex,int year,int month,int day)//派生类构造函数
             :Teacher(num,name,sex),BirthDate(year,month,day){}
    void Print()
    {
        cout << "Num\tName\tSex\tBirth: Year\tMonth\tDay" << endl;
        cout << Num << "\t" << Name << "\t" << Sex << "\t" << "Birth: " << Year << "\t" << Month << "\t" << Day << endl;

    }
    void change()//改变生日
    {
        char ch;
        cout << "DO you want to change the Birth of Info?(Y or N)" << endl;
        cin >> ch;
        if(ch=='Y')
        {
            cout << "please input the new Birth: ";
            cin >> Year >> Month >> Day;
            Print();
        }
    }
};

int main()
{
    Professor prof(23,"Jone","man",1983,2,28);
    prof.Print();
    prof.change();
    return 0;
}

