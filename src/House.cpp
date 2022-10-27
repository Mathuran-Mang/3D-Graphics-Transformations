/*
 * House.cpp
 *
 *  Created on: Oct 27, 2022
 *      Author: prism-student
 */

#include "House.hpp"
#include "Cube.hpp"
#include "Pyramid.hpp"
#include "Shape.hpp"

House::House() {
		cube = new Cube();
		pyramid = new Pyramid();
		pyramid->translate(0,0,1);
	    r = 1.0;
	    g = 1.0;
	    b = 1.0;
}

void House::draw()
{

		// add more objects
	    glPushMatrix();
	    this->ctmMultiply();
			cube->draw();
			pyramid->draw();

	    glPopMatrix();

}
