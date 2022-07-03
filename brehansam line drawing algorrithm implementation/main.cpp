#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<stdlib.h>

int x1,y1,x2,y2,dx,dy,p=0;
void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(-300.0,300.0,-300.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_POINTS);
   int x=x1,y=y1;
   int prev=0;
   int steps=max(dy,dx);
   int i=0;
   while(i<steps){
       printf("steps i:%d\n",i);
        prev=p;
        if(p<0){

            x=x+1;
            y=y;
            glVertex2f(x,y);
            printf("p= %d  and x= %d and y=%d \n",p,x,y);
            p=prev+(2*dy);
        }else if(p>=0){
            x=x+1;
            y=y+1;
            glVertex2f(x,y);
            printf("p= %d  and x= %d and y=%d \n",p,x,y);
            p=prev+(2*dy)-(2*dx);
        }
        i++;
    }
    glEnd();


glutSwapBuffers();
}

int main(int argc,char **argv){

    printf("Enter value of x1:");
    scanf("%d",&x1);

    printf("Enter value of y1:");
    scanf("%d",&y1);

    printf("Enter value of x2:");
    scanf("%d",&x2);

    printf("Enter value of y2:");
    scanf("%d",&y2);

    dy=abs(y2-y1);
    dx=abs(x2-x1);
    p=(2*dy)-dx;

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Bresenham's line drawing algorithm");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
