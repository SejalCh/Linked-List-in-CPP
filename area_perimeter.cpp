/*exp11_3-area and perimeter of different shapes*/
# include <iostream>
using namespace std;
class Shapes
{   
    public:
    float square()
    {
        float side=4;
        float area,perimeter;
        area=side*side;
        perimeter=4*side;
        cout<<"Area of the square:"<<area<<endl;
        cout<<"Perimeter of the square:"<<perimeter<<endl;
    }
    float rectangle()
    {
        float length=6,breadth=3;
        float area,perimeter;
        area=length*breadth;
        perimeter=2*length*breadth;
        cout<<"Area of the reactangle:"<<area<<endl;
        cout<<"Perimeter of the rectangle:"<<perimeter<<endl;
    }
    float circle()
    {
        float radius=5;
        float area,circumference;
        circumference=2*3.14*radius;
        area=3.14*radius*radius;
        cout<<"Area of circle:"<<area<<endl;
        cout<<"Circumference of the circle:"<<circumference<<endl;
    }

};
int main()
{
   Shapes sq;// creating multiple objects
   Shapes rect;
   Shapes circle;
   float s=sq.square();
   float r=rect.rectangle();
   float c=circle.circle();
   cout<<s<<endl;
   cout<<r<<endl;
   cout<<c<<endl;
}
/*output:
Area of the square:16
Perimeter of the square:16
Area of the reactangle:18
Perimeter of the rectangle:36
Area of circle:78.5
Circumference of the circle:31.4*/