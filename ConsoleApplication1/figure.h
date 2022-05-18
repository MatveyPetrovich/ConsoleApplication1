#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure
{
protected:
	int* sides;
	int size;
public:
	Figure() {
		sides = new int[0];
		size = 0;
	}
	Figure(int* sides, int size) {
		this->sides = sides;
		this->size = size;
	}

	virtual int perimeter() {
		int sum = 0;

		for (int i = 0; i < size; i++)
		{
			sum += sides[i];
		}
		return sum;
	}

	virtual string draw() {
		return "Figure is drawing now...";
	}
};

class Square : public Figure {
public:
	Square() {

	}

	Square(int* sides, int size) : Figure(sides, size) {

	}

	int perimeter() override {
		int sum = sides[0] * 4;
		return sum;
	}

	string draw() override {
		return "Square is drawing now...";
	}
};

class Triangle : public Figure {
public:
	Triangle() {

	}

	Triangle(int* sides, int size) : Figure(sides, size) {

	}

	string draw() override {
		return "Triangle is drawing now...";
	}
};

class Line : public Figure {
public:
	Line() {

	}

	Line(int* sides, int size) : Figure(sides, size) {

	}

	string draw() override {
		return "Line is drawing now...";
	}
};

