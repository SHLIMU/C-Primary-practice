#include <iostream>

using namespace std;
class BirthDate//������
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
class Teacher//��ʦ��
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
class Professor:public Teacher,public BirthDate//�����࣬�̳����պͽ�ʦ��
{
public:
    Professor(int num,char *name,char *sex,int year,int month,int day)//�����๹�캯��
             :Teacher(num,name,sex),BirthDate(year,month,day){}
    void Print()
    {
        cout << "Num\tName\tSex\tBirth: Year\tMonth\tDay" << endl;
        cout << Num << "\t" << Name << "\t" << Sex << "\t" << "Birth: " << Year << "\t" << Month << "\t" << Day << endl;

    }
    void change()//�ı�����
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

