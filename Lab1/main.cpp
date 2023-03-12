#include <string>
#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 7

using namespace std;

class Human {
private:
    int age;
    int weight;
    string name;
public:
    void Print() {
        cout<<"Имя: "<< name <<endl <<"Возраст: "<< age << endl <<"Вес: "<< weight<<endl;
    }
    void setName() {
        cout<<"Введите имя: ";
        cin>>name;
    }
    void setAge() {
        cout<<"Введите возраст : ";
        cin>>age;
    }
    void setWeight() {
        cout<<"Введите вес: ";
        cin>>weight;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getWeight() {
        return weight;
    }

    void GetPositionInfo() {
        for( int i = 0; i < N; i++) {
            cout<<"#"<<i+1<<" "<< points[i].GetInfo()<<endl;
        }
    }

    class Point {
    private:
        int x;
        int y;

    public:
        Point(int x, int y) {
            this -> x = x;
            this -> y = y;
        }
        string GetInfo() {
            return "Point: x = " + to_string(x) + " " + "y = " + to_string(y);
        }
    };
    Point points[N] {
        Point(0, 0),
        Point(3, 6),
        Point(2, 4),
        Point(2, 9),
        Point(4, 11),
        Point(8, 6),
        Point(9, 9)
    };

};

int main() {
    Human Pavel;
    Pavel.GetPositionInfo();
    return 0;
}
