#include<iostream>
#include<cmath>
using namespace std;


//function prototype for radius
double radius(double x1, double y1, double x2, double y2);

//Function prototype for circumference
double circumference(double radius);

//Function prototype  for area
double area(double radius);
double pi;

int main()
{
	 pi = 3.1415926535;
	double x1, y1, x2, y2;
	double r;


	cout << "Enter 4 numbers corresponding to the coordinates of two points " << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	r = radius(x1, y1, x2, y2);


	cout << "The radius is: " << r<< endl;

	//calling circumference and calculating result
	cout << "The circumference is:" << circumference(r)<< endl;

	//calling area and calculating result
	cout << "The are is: " << area(r)<< endl;


	return 0;
}

//radius function definition
double radius(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


// circumference function definition
 double circumference(double radius)
 {
	 return 2 * pi * radius;
}

 // area function definition
 double area(double radius)

 {
	 return pi * pow(radius, 2);


 }
 /*Enter 4 numbers corresponding to the coordinates of two points
2
3
4
3
The radius is: 2
The circumference is:12.5664
The are is: 12.5664*/