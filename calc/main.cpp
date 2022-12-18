#include <iostream>
#include <getopt.h>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
        
    int i, opt, circle = 3.14, triangle = 1, x, b=1, a, p, c;
    
    while ((opt = getopt (argc, argv, "c:t:h")) != -1){
        switch (opt) {
            case 'h':
                cout<<"КАЛЬКУЛЯТОР - "<< argv[0] << endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-c — нахождение площади круга" << endl << "-t — нахождение площади треугольника"<< endl << "Для того чтобы продолжить запустите программу еще раз с нужным параметром и введите значения через пробел"<< endl;
            break;
                
                
            case 'c':
                x = strtol(argv[2], NULL, 10);
                circle=circle*x*x;
                
                printf("Multiplication circle is %d\n", circle);
                
            break;
                
            case 't':
                a= strtol(argv[4], NULL, 10);
                b= strtol(argv[2], NULL, 10);
                c= strtol(argv[3], NULL, 10);
                p=(a+b+c)/2;
                    triangle=sqrt(p*(p-a)*(p-b)*(p-c));
                printf("Multiplication triangle is %d\n", triangle);
                
            break;
            
        }
    }
}
