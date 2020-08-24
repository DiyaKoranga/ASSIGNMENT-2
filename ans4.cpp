#include<iostream>
using namespace std;
class Rectangle{
private: float length=1;
float width=1;
public:float perimeter(){
    float p=2*(length+width);
return p;}
float area(){
    float a=length*width;
return a;}
float getLength(){
return length;}
float getWidth(){
return width;}
void setLength(float l){
if(l>=0.0 && l<=20.0){
length=l;}}
void setWidth(float w)
{if(w>=0.0 && w<=20.0){
width=w;}}
};
int main(){
Rectangle obj1;
obj1.setLength(5.00);
	obj1.setWidth(10.00);
	 cout<<"the perimeter of the rectangle is:"<<obj1.perimeter()<<endl;
	 cout<<"Area of the rectangle is:"<<obj1.area()<<endl;
	return 0;
}
