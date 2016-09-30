/*
 * ShapeFactory.cpp
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#include "ShapeFactory.h"
#include "../util/Rectangle.h"
#include "../util/Square.h"
#include "../util/Triangle.h"

ShapeFactory::ShapeFactory() {
	// TODO Auto-generated constructor stub

}

ShapeFactory::~ShapeFactory() {
	// TODO Auto-generated destructor stub
}

Shape* ShapeFactory::getShape(string name) {

	if (name == "rectangle") {
		return new Rectangle();

	} else if (name == "square") {
		return new Square();

	} else if (name == "triangle") {
		return new Triangle();
	}

	else{
		cout<<"Nothing to give"<<endl;
	}
}
