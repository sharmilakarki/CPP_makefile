/*
 * Shape.h
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>

using namespace std;

class Shape {
public:
	Shape();
	virtual ~Shape();

	void virtual draw()=0;
};

#endif /* SHAPE_H_ */
