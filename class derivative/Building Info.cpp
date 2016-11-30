#include <iostream>

using namespace std;

class Building//BUilding类
{
protected:
    int Ply,Room;
public:
    Building(int ply,int room)
    {
        Ply=ply;
        Room=room;
    }
};

class House:public Building//派生类House
{
protected:
    int Bedroom,Bathroom;
public:
    House(int ply,int room,int bedroom,int bathroom):Building(ply,room)
    {
        Bedroom=bedroom;
        Bathroom=bathroom;
    }
    void Print()
    {
        cout << "The date of House:" <<endl;
        cout << "Ply\tRoom\tBedroom\tBathroom" << endl;
        cout << Ply << "\t" << Room << "\t" << Bedroom << "\t" << Bathroom <<endl;
    }
};

class Office:public Building//派生类Office
{
protected:
    int Extinguisher,Phone;
public:
    Office(int ply,int room,int extinguisher,int phone):Building(ply,room)
    {
        Extinguisher=extinguisher;
        Phone=phone;
    }
    void Print()
    {
        cout << "The date of Office:" <<endl;
        cout << "Ply\tRoom\tExtinguisher\tPhone" << endl;
        cout << Ply << "\t" << Room << "\t" << Extinguisher << "\t\t" << Phone <<endl;
    }
};

int main()
{
    House H(20,60,120,60);
    Office O(30,300,150,900);
    H.Print();
    O.Print();
    return 0;
}
