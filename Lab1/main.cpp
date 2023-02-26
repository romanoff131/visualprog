#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 15
//srand(time(NULL));
using namespace std;


void average_value(int z, int x, int y) {

    z = sqrt(pow(x,2)+pow(y,2));
    std::cout<<"Пройденное расстояние "<<z<<endl;
}

int main() {

    srand(time(NULL));
    int x = 4, y = 1;
    int z = 0;
    for(int i = 0; i<N; i++) {
        int w = (rand()%3)-1;
        x = w + x;
        y = w + y;
        std::cout<<"Значение х и у после перемещения: "<<"("<<x<<";"<<y<<")"<<endl;
        if(i == N - N or i == N - 1) {
            average_value(z,x,y);
        }
    }
    return 0;
}
