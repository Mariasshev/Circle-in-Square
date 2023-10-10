#pragma once
#include <iostream>
using namespace std;

class Circle {
protected:
	int radius;
public:
	Circle() {
		radius = 0;
	}
	Circle(int r) {
		radius = r;
	}
	void SetRadius(int r) {
		radius = r;
	}
	int GetRadius() {
		return radius;
	}
	void EnterData() {
		cout << "Enter circle radius: ";
		cin >> radius;
	}
	void Print() {
		cout << "circle radius: " << radius << endl;
	}
};

class Square {
protected:
	int side;
public:
	Square() {
		side = 0;
	}
	void SetSide(int s) {
		side = s;
	}
	Square(int s) 
	{
		side = s;
	}
	int GetSide() 
	{
		return side;
	}
	void EnterData() 
	{
		cout << "Enter side size: ";
		cin >> side;
	}
	void Print() 
	{
		cout << "square side: " << side << endl;
	}
};

class CircleInSquare :public Circle, public Square
{
public:
	CircleInSquare() = default;
	CircleInSquare(int r, int s) {
		Circle::SetRadius(r);
		Square::SetSide(s);
	}
	void Print(){
		cout << "Circle radius: " << Circle::GetRadius() << endl;
		cout << "Square side: " << Square::GetSide() << endl;
		if (Circle::GetRadius() == (Square::GetSide() / 2)) {
			cout << "Circle inscribed in a square!" << endl;
		}
		else {
			cout << "Error" << endl;
		}
	}
};