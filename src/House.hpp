/*
 * House.hpp
 *
 *  Created on: Oct 27, 2022
 *      Author: prism-student
 */

#ifndef SRC_HOUSE_HPP_
#define SRC_HOUSE_HPP_
#include <GL/glut.h>
#include "Shape.hpp"
#include "Vector.hpp"
#include "Cube.hpp"
#include "Pyramid.hpp"
class House: public Shape {
protected:
	Pyramid *pyramid;  /* 2D array to store cube vertices */
	Cube *cube;     /* 2D array to store faces */
	GLfloat r, g, b;
public:
	House();
	void draw();
};

#endif /* SRC_HOUSE_HPP_ */
