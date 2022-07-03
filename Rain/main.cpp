
#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}
float m,n;

void line1()
{
    int i=3,j=-3;
    glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}


void line2()
{
    int i=20,j=14;

    glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}


void line3()
{
    int i=40,j=34;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void line4()
{

    int i=-14,j=-20;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void line5()
{
    int i=-35,j=-39;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void line6()
{
    int i=-50,j=-54;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void line7()
{

    int i=-60,j=-66;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void move_rain()
{
    m-=.01;
    n-=.01;
    if(m<-40)
    {
        m=30;
        n=30;
    }
    glutPostRedisplay();
}

void line8()
{

    int i=-75,j=-81;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}


void line9()
{

    int i=-85,j=-91;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}


void line10()
{
    int i=56,j=50;
     glLineWidth(2);
    glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}

void line11()
{

    int i=76,j=70;
     glLineWidth(2);
     glColor3ub(149, 165, 166);

    glBegin(GL_LINES);

    glVertex2f(-99,m+i);
    glVertex2f(-97,n+j);

    glVertex2f(-95,m+i);
    glVertex2f(-93,n+j);

    glVertex2f(-91,m+i);
    glVertex2f(-89,n+j);

    glVertex2f(-87,m+i);
    glVertex2f(-85,n+j);

    glVertex2f(-83,m+i);
    glVertex2f(-81,n+j);

    glVertex2f(-79,m+i);
    glVertex2f(-77,n+j);

    glVertex2f(-75,m+i);
    glVertex2f(-73,n+j);


    glVertex2f(-71,m+i);
    glVertex2f(-69,n+j);

    glVertex2f(-67,m+i);
    glVertex2f(-65,n+j);


    glVertex2f(-63,m+i);
    glVertex2f(-61,n+j);


    glVertex2f(-59,m+i);
    glVertex2f(-57,n+j);


    glVertex2f(-55,m+i);
    glVertex2f(-53,n+j);


    glVertex2f(-51,m+i);
    glVertex2f(-49,n+j);


    glVertex2f(-47,m+i);
    glVertex2f(-45,n+j);


    glVertex2f(-43,m+i);
    glVertex2f(-41,n+j);


    glVertex2f(-39,m+i);
    glVertex2f(-37,n+j);

    glVertex2f(-35,m+i);
    glVertex2f(-33,n+j);

    glVertex2f(-31,m+i);
    glVertex2f(-29,n+j);


    glVertex2f(-27,m+i);
    glVertex2f(-25,n+j);

    glVertex2f(-23,m+i);
    glVertex2f(-21,n+j);

    glVertex2f(-19,m+i);
    glVertex2f(-17,n+j);

    glVertex2f(-15,m+i);
    glVertex2f(-13,n+j);

    glVertex2f(-11,m+i);
    glVertex2f(-9,n+j);

    glVertex2f(-7,m+i);
    glVertex2f(-5,n+j);

    glVertex2f(-3,m+i);
    glVertex2f(-1,n+j);

    glVertex2f(1,m+i);
    glVertex2f(3,n+j);



    glVertex2f(5,m+i);
    glVertex2f(7,n+j);


    glVertex2f(9,m+i);
    glVertex2f(11,n+j);



    glVertex2f(13,m+i);
    glVertex2f(15,n+j);

    glVertex2f(17,m+i);
    glVertex2f(19,n+j);

    glVertex2f(21,m+i);
    glVertex2f(23,n+j);

    glVertex2f(25,m+i);
    glVertex2f(27,n+j);

    glVertex2f(29,m+i);
    glVertex2f(31,n+j);


    glVertex2f(33,m+i);
    glVertex2f(35,n+j);

    glVertex2f(37,m+i);
    glVertex2f(39,n+j);

    glVertex2f(41,m+i);
    glVertex2f(43,n+j);

    glVertex2f(45,m+i);
    glVertex2f(47,n+j);

    glVertex2f(49,m+i);
    glVertex2f(51,n+j);


    glVertex2f(53,m+i);
    glVertex2f(55,n+j);

    glVertex2f(57,m+i);
    glVertex2f(59,n+j);


    glVertex2f(61,m+i);
    glVertex2f(63,n+j);


    glVertex2f(65,m+i);
    glVertex2f(67,n+j);


    glVertex2f(69,m+i);
    glVertex2f(71,n+j);


    glVertex2f(73,m+i);
    glVertex2f(75,n+j);

    glVertex2f(77,m+i);
    glVertex2f(79,n+j);

    glVertex2f(81,m+i);
    glVertex2f(83,n+j);

    glVertex2f(85,m+i);
    glVertex2f(87,n+j);

    glVertex2f(89,m+i);
    glVertex2f(91,n+j);

    glVertex2f(93,m+i);
    glVertex2f(95,n+j);
    glEnd();
}



void rain()
{

    line1();
    line2();
    line3();
    line4();
    line5();
    line6();
    line7();
    line8();
    line9();
    line10();

    line11();

}
static int flag=0;
void lighting(int value)
{
    printf("before flag=%d\n",flag);
    if(flag==0)
    {

        glClearColor(1,1,1,1);

        flag=1;
    }else
    {
        glClearColor (0.0, 0.0, 0.0, 0.0);
        sndPlaySound("D:\\GRAPHICS LAB\\abc\\thunder.wav",SND_ASYNC);
        flag=0;
    }

}
void sky()
{
    glColor3ub(189, 195, 199);
    glBegin(GL_POLYGON);
    glVertex2f(-100,40);
    glVertex2f(100,40);
    glVertex2f(100,100);
    glVertex2f(-100,100);
    glEnd();

}

float bc=1,bc2=-1;
void blackcloud1()
{
    glColor3ub(149, 165, 166);
    circle(20,20,bc-40,70);
    circle(10,15,bc-50,80);
    circle(10,15,bc-35,80);
    circle(10,15,bc-25,70);
    circle(10,15,bc-63,67);
    circle(10,15,bc-55,60);
    circle(10,15,bc-30,60);
    circle(10,15,bc-45,60);
}

void blackcloud3()
{
    glColor3ub(149, 165, 166);
    circle(20,20,bc-75,70);
    circle(10,15,bc-85,80);
    circle(10,15,bc-70,80);
    circle(10,15,bc-60,70);
    circle(10,15,bc-98,67);
    circle(10,15,bc-90,60);
    circle(10,15,bc-65,60);
    circle(10,15,bc-80,60);
}

void move_cloud1()
{

    if(bc<25)
    {
        bc+=.02;
        glutPostRedisplay();
    }else{

    }
}
void blackcloud2()
{
    glColor3ub(149, 165, 166);
    circle(20,20,bc2+40,70);
    circle(10,15,bc2+50,80);
    circle(10,15,bc2+35,80);
    circle(10,15,bc2+25,70);
    circle(10,15,bc2+63,67);
    circle(10,15,bc2+55,60);
    circle(10,15,bc2+30,60);
    circle(10,15,bc2+45,60);
}

void blackcloud4()
{
    glColor3ub(149, 165, 166);
    circle(20,20,bc2+75,70);
    circle(10,15,bc2+85,80);
    circle(10,15,bc2+70,80);
    circle(10,15,bc2+60,70);
    circle(10,15,bc2+98,67);
    circle(10,15,bc2+90,60);
    circle(10,15,bc2+65,60);
    circle(10,15,bc2+80,60);
}

void black_move2()
{
    if(bc2>-20)
    {
        bc2-=0.02;
        glutPostRedisplay();
    }else
    {

    }
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);



    glPushMatrix();
    rain();
    move_rain();
    glPopMatrix();

    sky();

    glPushMatrix();
    blackcloud1();
    move_cloud1();
    glPopMatrix();

    glPushMatrix();
    blackcloud2();
    black_move2();
    glPopMatrix();


    glPushMatrix();
    blackcloud3();
    glPopMatrix();

    glPushMatrix();
    blackcloud4();
    glPopMatrix();


	glFlush();
}




void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0,-1.0, 1.0);
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
            glutTimerFunc(250,lighting,0);
            break;


		case 's':
			 sndPlaySound(NULL,SND_ASYNC);
			 break;

	  default:
			break;
	}
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1500, 750);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Rain");
	init();
	glutDisplayFunc(display);

	glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;
}
