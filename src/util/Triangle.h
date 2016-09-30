/*
 * Triangle.h
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include "Shape.h"

class Triangle :public Shape{
public:
	Triangle();
	virtual ~Triangle();

	void draw();
};

#endif /* TRIANGLE_H_ */
