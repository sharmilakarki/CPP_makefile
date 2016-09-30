/*
 * Rectangle.h
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

using namespace std;
class Rectangle:public Shape {
public:
	Rectangle();
	virtual ~Rectangle();
	void draw();
};

#endif /* RECTANGLE_H_ */
