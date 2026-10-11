#include <iostream>
using namespace std;

class Rectangle {
private:

double width;
double length;

public:

// Constructor
Rectangle(double w, double l){
    width = w;
    length = l;
}

// Getters
double getWidth(){
    return width;
}

double getLength(){
    return length;
}

// Setters 
void setWidth(double w){
    width = w;
}

void setLength(double l){
    length = l;
}

// Area function
double calculateArea(){
    return width * length;
}

// Perimeter function
double calculatePerimeter(){
    return 2 * (width + length);
}
};

int main(){

// Example 1 
Rectangle rect1(5,3);
cout << "Rectangle 1" <<endl;
cout << "Width: " << rect1.getWidth() <<endl;
cout <<"Length: " << rect1.getLength() <<endl;
cout <<"Area: "<< rect1.calculateArea() <<endl;
cout <<"Perimeter: "<< rect1.calculatePerimeter() <<endl;

// Example 1 but with different value sets
rect1.setWidth(10);
rect1.setLength(4);
cout << "  Rectangle 1 after the setters " <<endl;
cout << "Width: " << rect1.getWidth()<<endl;
cout <<"Length: " << rect1.getLength() <<endl;
cout <<"Area: "<< rect1.calculateArea() <<endl;
cout <<"Perimeter: "<< rect1.calculatePerimeter() <<endl;

// Example 2
Rectangle rect2(2.5,4.2);
cout << " Rectangle 2" <<endl;
cout << "Width: " << rect2.getWidth() <<endl;
cout << "Lenghth: "<< rect2.getLength() <<endl;
cout << "Area: "<<rect2.calculateArea()<<endl;
cout << "Perimeter: "<<rect2.calculatePerimeter() <<endl;


return 0;


}