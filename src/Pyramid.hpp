/*
 * Pyramid.cpp
 *
 *  Created on: Oct 25, 2022
 *      Author: prism-student
 */


#ifndef SRC_PYRAMID_HPP_
#define SRC_PYRAMID_HPP_

#include <GL/glut.h>
#include "Shape.hpp"
#include "Vector.hpp"

class Pyramid: public Shape {
protected:
	GLfloat v[5][3];  /* 2D array to store cube vertices */
	GLint face[4][3];      /* 2D array to store faces */
	GLfloat r, g, b;       /* color cube */
public:
	Pyramid();
	void draw();
	void drawFace(int);
};

#endif
