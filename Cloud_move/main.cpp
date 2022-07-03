#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include<math.h>

float mv=0;
float mx[50]={0}, my[50]={0};
int i;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();

  //glOrtho(0, 300, 300, 0, -1, 1);
  glOrtho(0,1500,0,700,-150,150); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1

  for(i=0;i<50;i++)
{
    mx[i]=rand()%1500;
    my[i]=rand()%750;
}
}

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

void half_circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=50;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);


        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}
//moving moon
float mm=0;
void move_moon()
{
    if(mm<700)
    {
        mm+=0.04;
    }else{
        mm=-300;
    }
    glutPostRedisplay();

}
void moon()
{

    glPushMatrix();
    glTranslatef(0,mm,0);
    glColor3f(1,1,1);

    //white
    circle(80,80,400,300);

    //black
    glColor3f(0,0,0);

    circle(80,80,420,320);

    glPopMatrix();
    move_moon();

    glFlush();
}

//moving cloud
void move_cloud(GLfloat t)
{

    if(mv<=1600)
    {
        mv=mv+t;
    }else{
        mv=-1000;

    }
    glutPostRedisplay();
}

void make_circle(int x, int y)
{
    glPushMatrix();  //only move matrix
    glTranslatef(mv,0,0);  // for moing matrix
    //left
    glColor3f(1,1,1);
    circle(65,40,x,y);


    //small_left
    circle(30,30,(x+10),(y+30));

    //middle
    circle(80,80,(x+110),(y+40));

    //middle_half
    half_circle(90,90,(x+100),(y-40));


    //right
    circle(65,40,(x+200),y);


    //small_right
    circle(30,30,(x+200),(y+40));
    glPopMatrix();   // only stop matrix
    move_cloud(.06);

    glEnd();

}

void make_like_star()
{
    glPushMatrix();

    circle(2,2,20,20);

    for(int i=0;i<50;i++)
    {
        circle(2,2,mx[i],my[i]);
    }
    glPopMatrix();

    glFlush();
}



void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   moon();
   make_circle(600,390);


   make_circle(-50,200);

   make_like_star();


   glFlush();
// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,700);
    glutCreateWindow("Moving half-moon and cloud");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
