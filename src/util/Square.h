/*
 * Square.h
 *
 *  Created on: Sep 30, 2016
 *      Author: sharmila
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "../factory/Shape.h"

using namespace std;

class Square :public Shape{
public:
	Square();
	virtual ~Square();
	void draw();
};

#endif /* SQUARE_H_ */
