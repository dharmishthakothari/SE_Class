#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual float getArea()
	{
		return  0.0f;
	}
};
class Square:public Shape
{
	public:
		int side;
		Square(int s)
		{
			side=s;			
		}
		float getArea()
		{
			return side*side;
		}
};
int main()
{
	Shape *s;
	Square s1(2);
	s=&s1;
	cout<<s->getArea();
}
