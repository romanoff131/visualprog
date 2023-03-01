#include <string>
#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 15

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

};

int main() {
    Human Pavel;

    return 0;
}
