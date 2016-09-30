/*
 * Main.cpp
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#include <iostream>
#include "factory/ShapeFactory.h"
#include "util/Shape.h"

int main() {
	string s;
	ShapeFactory* shapeFactory =new ShapeFactory();
	cout << "Enter the shape name" << endl;
	cin>>s;
	Shape *shape = shapeFactory->getShape(s);
	shape->draw();
	return 0;
}
