


#include "Pyramid.hpp"

Pyramid::Pyramid()
{

	v[0][0] = 0; v[0][1] = 0; v[0][2] = 0;
	v[1][0] = 0.5; v[1][1] =0.5; v[1][2] = 1;
	v[2][0] = 1; v[2][1] = 0; v[2][2] = 0;
	v[3][0] = 0; v[3][1] = 1; v[3][2] = 0;
	v[4][0] = 1; v[4][1] = 1; v[4][2] = 0;
	face[0][0] = 0; face[0][1] = 1; face[0][2] = 2;
	face[1][0] = 0; face[1][1] = 1; face[1][2] = 3;
	face[2][0] = 3; face[2][1] = 1; face[2][2] = 4;
	face[3][0] = 2; face[3][1] = 1; face[3][2] = 4;
    r = 1.0;
    g = 1.0;
    b = 1.0;
}

//
//v[0][0] = 0; v[0][1] = 0; v[0][2] = 0;
//v[1][0] = 0; v[1][1] = 1; v[1][2] = 0;
//v[2][0] = 1; v[2][1] = 1; v[2][2] = 0;
//v[3][0] = 1; v[3][1] = 0; v[3][2] = 0;
//v[4][0] = 0; v[4][1] = 0; v[4][2] = 1;
//v[5][0] = 0; v[5][1] = 1; v[5][2] = 1;
//v[6][0] = 1; v[6][1] = 1; v[6][2] = 1;
//v[7][0] = 1; v[7][1] = 0; v[7][2] = 1;
//face[0][0] = 0; face[0][1] = 1; face[0][2] = 2; face[0][3] = 3;
//face[1][0] = 7; face[1][1] = 6; face[1][2] = 5; face[1][3] = 4;
//face[2][0] = 0; face[2][1] = 4; face[2][2] = 5; face[2][3] = 1;
//face[3][0] = 2; face[3][1] = 1; face[3][2] = 5; face[3][3] = 6;
//face[4][0] = 3; face[4][1] = 2; face[4][2] = 6; face[4][3] = 7;
//face[5][0] = 0; face[5][1] = 3; face[5][2] = 7; face[5][3] = 4;

void Pyramid::drawFace(int i)
{

	glColor3f(r, g, b);

	glBegin(GL_LINE_LOOP);
	glVertex3fv(v[face[i][0]] );
	glVertex3fv(v[face[i][1]] );
	glVertex3fv(v[face[i][2]] );
	glEnd();
}

void Pyramid::draw()
{
    glPushMatrix();
    this->ctmMultiply();

    glScalef(s, s, s);
	    for (int i = 0; i < 4; i++) {
		    drawFace(i);
	    }


    glPopMatrix();
}

