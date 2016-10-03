/*
 * ShapeFactory.h
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_
#include "Shape.h"


class ShapeFactory {
public:
	ShapeFactory();
	virtual ~ShapeFactory();

	Shape *getShape(string name);
};

#endif /* SHAPEFACTORY_H_ */
