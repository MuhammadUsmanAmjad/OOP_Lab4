#include<iostream>
#include<cstring>
using namespace std;
class cars {

    string name, colour;
    int capacity, seats, year, engine_num, frame_num;
public:
    cars() {
        name = "car";
        colour = "black";
        capacity = 0;
        seats = 0;
        year = 0;
        engine_num = 0;
        frame_num = 10;

    }
    cars(const cars& obj)
    {

        colour = obj.colour;
        capacity = obj.capacity;
        seats = obj.seats;

        //cout<<"copy constructor called";
    }

    string getname() {

        return name;

    }
    string getcolour() {

        return colour;
    }
    int getcapacity() {

        return capacity;
    }
    int getseats() {

        return seats;
    }
    int getyear() {

        return year;
    }
    int getengine_num() {

        return engine_num;
    }
    int getframe_num() {

        return frame_num;
    }

    void setname(string n) {

        name = n;
    }
    void setcolour(string col) {

        colour = col;
    }
    void setcapacity(int cap) {

        capacity = cap;
    }
    void setseats(int s) {

        seats = s;
    }
    void setyear(int y) {

        year = y;
    }
    void setfengine_num(int e) {

        engine_num = e;
    }



    void setframe_num(int frame) {

        frame_num = frame;
    }


    void input()
    {
        cout << "enter name:" << endl;
        cin >> name;
        cout << "enter year:" << endl;
        cin >> year;
        cout << "enter engine num:" << endl;
        cin >> engine_num;
        cout << "enter frame_num" << endl;
        cin >> frame_num;
    }


};

int main()
{
    cars obj1;
    obj1.setname("abcd");
    obj1.setcolour("white");
    obj1.setseats(8);
    obj1.setyear(2012);
    obj1.setfengine_num(8);
    obj1.setfengine_num(100);
    cout << "name is:  " << obj1.getname() << endl;
    cout << "colour is:" << obj1.getcolour() << endl;
    cout << "seats no is: " << obj1.getseats() << endl;
    cout << "year is:" << obj1.getyear() << endl;
    cout << "engine no is:" << obj1.getengine_num() << endl;;
    cout << "frame num is:" << obj1.getframe_num() << endl;
    cars obj2 = obj1;
    obj2.input();
    cout << "name is:  " << obj2.getname() << endl;
    cout << "colour is:" << obj2.getcolour() << endl;
    cout << "seats no is: " << obj2.getseats() << endl;
    cout << "year is:" << obj2.getyear() << endl;
    cout << "engine no is:" << obj2.getengine_num() << endl;;
    cout << "frame num is:" << obj2.getframe_num() << endl;

    system("pause");
    return 0;

}