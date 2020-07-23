#include<windows.h>
#include<GL/glut.h>
void display(){
      glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
      glClear(GL_COLOR_BUFFER_BIT);

      glBegin(GL_QUADS);//right side
      glColor3ub(77, 77, 77);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.7f, 0.0f);
      glVertex2f(0.7f, 0.2f);
      glVertex2f(0.0f, 0.2f);

      glEnd();

      glBegin(GL_QUADS);//right side
      glColor3ub(102, 102, 102);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(0.7f, 0.2f);
      glVertex2f(0.7f, 0.4f);
      glVertex2f(0.0f, 0.4f);


      glEnd();

      glBegin(GL_QUADS);//right side //window
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.4f);
      glVertex2f(0.7f, 0.4f);
      glVertex2f(0.7f, 0.6f);
      glVertex2f(0.0f, 0.6f);

      glEnd();

      glBegin(GL_QUADS);//right side
      glColor3ub(140, 140, 140);
      glVertex2f(0.0f, 0.6f);
      glVertex2f(0.7f, 0.6f);
      glVertex2f(0.7f, 0.8f);
      glVertex2f(0.0f, 0.8f);

      glEnd();

      glBegin(GL_QUADS);//right side
      glColor3ub(64, 64, 64);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(0.7f, 0.0f);
      glVertex2f(0.7f, -0.2f);
      glVertex2f(0.0f, -0.2f);

      glEnd();


      glBegin(GL_QUADS);//left side
      glColor3ub(77, 77, 77);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(-0.7f, 0.0f);
      glVertex2f(-0.7f, 0.2f);
      glVertex2f(0.0f, 0.2f);

      glEnd();

      glBegin(GL_QUADS);//left side
      glColor3ub(102, 102, 102);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(-0.7f, 0.2f);
      glVertex2f(-0.7f, 0.4f);
      glVertex2f(0.0f, 0.4f);

      glEnd();

      glBegin(GL_QUADS);//left side
      glColor3ub(115, 115, 115);
      glVertex2f(0.0f, 0.4f);
      glVertex2f(-0.7f, 0.4f);
      glVertex2f(-0.7f, 0.6f);
      glVertex2f(0.0f, 0.6f);

      glEnd();

      glBegin(GL_QUADS);//left side //window
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.4f);
      glVertex2f(-0.7f, 0.4f);
      glVertex2f(-0.7f, 0.6f);
      glVertex2f(0.0f, 0.6f);

      glEnd();

      glBegin(GL_QUADS);//left side
      glColor3ub(140, 140, 140);
      glVertex2f(0.0f, 0.6f);
      glVertex2f(-0.7f, 0.6f);
      glVertex2f(-0.7f, 0.8f);
      glVertex2f(0.0f, 0.8f);

      glEnd();


      glBegin(GL_QUADS);//left side
      glColor3ub(64, 64, 64);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(-0.7f, 0.0f);
      glVertex2f(-0.7f, -0.2f);
      glVertex2f(0.0f, -0.2f);

      glEnd();







      glBegin(GL_QUADS);//left curve side
      glColor3ub(153, 153, 153);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.8f, 0.6f);
      glVertex2f(-0.7f, 0.8f);
      glVertex2f(-0.7f, 0.0f);

      glEnd();

      glBegin(GL_QUADS);//left curve side
      glColor3ub(128, 128, 128);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.7f, 0.6f);
      glVertex2f(-0.7f, 0.0f);

      glEnd();

      glBegin(GL_QUADS);//left curve side
      glColor3ub(115, 115, 115);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.8f, 0.2f);
      glVertex2f(-0.7f, 0.4f);
      glVertex2f(-0.7f, 0.0f);

      glEnd();

      glBegin(GL_QUADS);//left curve side
      glColor3ub(0, 0, 0);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.8f, -0.2f);
      glVertex2f(-0.7f, -0.01f);
      glVertex2f(-0.7f, 0.2f);

      glEnd();

      glBegin(GL_QUADS);//left curve side
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f, -0.2f);
      glVertex2f(-0.7f, 0.0f);
      glVertex2f(-0.8, -0.16f);
      glVertex2f(-0.8f, -0.3f);



      glEnd();






      glBegin(GL_QUADS);//left up stair
      glColor3ub(204, 0, 0);
      glVertex2f(0.0f, -0.2f);
      glVertex2f(-0.7f, -0.2f);
      glVertex2f(-0.8f, -0.3f);
      glVertex2f(0.0f, -0.3f);

      glEnd();

      glBegin(GL_QUADS);//right up stair
      glColor3ub(204, 0, 0);
      glVertex2f(0.0f, -0.2f);
      glVertex2f(0.7f, -0.2f);
      glVertex2f(0.8f, -0.3f);
      glVertex2f(0.0f, -0.3f);

      glEnd();

      glBegin(GL_QUADS);//right up stair cliff
      glColor3ub(166, 166, 166);
      glVertex2f(0.0f, -0.3f);
      glVertex2f(0.8f, -0.3f);
      glVertex2f(0.8f, -0.4f);
      glVertex2f(0.0f, -0.4f);

      glEnd();

      glBegin(GL_QUADS);//left up stair  cliff
      glColor3ub(166, 166, 166);
      glVertex2f(0.0f, -0.3f);
      glVertex2f(-0.8f, -0.3f);
      glVertex2f(-0.8f, -0.4f);
      glVertex2f(0.0f, -0.4f);

      glEnd();

      glBegin(GL_QUADS);//left down stair
      glColor3ub(140, 140, 140);
      glVertex2f(0.0f, -0.4f);
      glVertex2f(-0.8f, -0.4f);
      glVertex2f(-0.9f, -0.5f);
      glVertex2f(0.0f, -0.5f);

      glEnd();

      glBegin(GL_QUADS);//right down stair
      glColor3ub(140, 140, 140);
      glVertex2f(0.0f, -0.4f);
      glVertex2f(0.8f, -0.4f);
      glVertex2f(0.9f, -0.5f);
      glVertex2f(0.0f, -0.5f);

      glEnd();

      glBegin(GL_QUADS);//right down stair cliff
      glColor3ub(166, 166, 166);
      glVertex2f(0.0f, -0.5f);
      glVertex2f(0.9f, -0.5f);
      glVertex2f(0.9f, -0.6f);
      glVertex2f(0.0f, -0.6f);

      glEnd();

      glBegin(GL_QUADS);//left down stair cliff
      glColor3ub(166, 166, 166);
      glVertex2f(0.0f, -0.5f);
      glVertex2f(-0.9f, -0.5f);
      glVertex2f(-0.9f, -0.6f);
      glVertex2f(0.0f, -0.6f);

      glEnd();

      glBegin(GL_QUADS);//right door frame red side
      glColor3ub(204, 0, 0);
      glVertex2f(0.3f, -0.2f);
      glVertex2f(0.3f, 0.2f);
      glVertex2f(0.35f, 0.2f);
      glVertex2f(0.35f, -0.2f);

      glEnd();

      glBegin(GL_QUADS);//left door frame red side
      glColor3ub(204, 0, 0);
      glVertex2f(-0.3f, -0.2f);
      glVertex2f(-0.3f, 0.2f);
      glVertex2f(-0.35f, 0.2f);
      glVertex2f(-0.35f, -0.2f);


      glEnd();

      glBegin(GL_QUADS);//red upper right side door frame
      glColor3ub(140,140,140);
      glVertex2f(0.0f, 0.1f);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(0.45f, 0.2f);
      glVertex2f(0.35f, 0.1f);

      glEnd();

      glBegin(GL_QUADS);//red upper left side door frame
      glColor3ub(140,140,140);
      glVertex2f(0.0f, 0.1f);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(-0.45f, 0.2f);
      glVertex2f(-0.35f, 0.1f);

      glEnd();



      glBegin(GL_QUADS);//right door
      glColor3ub(179, 179, 179);
      glVertex2f(0.0f, -0.2f);
      glVertex2f(0.0f, 0.1f);
      glVertex2f(0.3f, 0.1f); // prev value x 0.2
      glVertex2f(0.3f, -0.2f); // prev val x0.2

      glEnd();

      glBegin(GL_QUADS);//left door
      glColor3ub(179, 179, 179);
      glVertex2f(0.0f, -0.2f);
      glVertex2f(0.0f, 0.1f);
      glVertex2f(-0.3f, 0.1f);
      glVertex2f(-0.3f, -0.2f);

      glEnd();

      glBegin(GL_LINES); // lines on the d building
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f, -0.2f);
      glVertex2f(0.5f, 0.8f);

      glEnd();


      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.3f, 0.2f);
      glVertex2f(0.3f, 0.8f);

      glEnd();


      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(0.0f, 0.8f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.5f, -0.2f);
      glVertex2f(-0.5f, 0.8f);

      glEnd();


      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f, 0.2f);
      glVertex2f(-0.3f, 0.8f);

      glEnd();


      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.2f);
      glVertex2f(0.0f, 0.8f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.3f);
      glVertex2f(0.7f, 0.3f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.5f);
      glVertex2f(0.7f, 0.5f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.7f);
      glVertex2f(0.7f, 0.7f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.3f);
      glVertex2f(-0.7f, 0.3f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.5f);
      glVertex2f(-0.7f, 0.5f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.0f, 0.7f);
      glVertex2f(-0.7f, 0.7f);

      glEnd();




      glBegin(GL_LINES);
      glColor3ub(0, 0, 0); // the line between the doors
      glVertex2f(0.0f, 0.1f);
      glVertex2f(0.0f, -0.2f);
      glVertex2f(0.1f, 0.3f);
      glVertex2f(0.1f, 0.2f);

      glVertex2f(0.1f, -0.2f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f, -0.2f);
      glVertex2f(-0.7f, 0.8f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.8f, -0.3f);
      glVertex2f(-0.8f, 0.6f);

      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.6f, -0.2f);
      glVertex2f(-0.6f, 0.7f);

      glEnd();

     // glBegin(GL_LINES);
      //glColor3ub(0, 0, 0);
      //glVertex2f(-0.4f, -0.2f);
     // glVertex2f(-0.4f, 0.7f);

     // glEnd();

     // glBegin(GL_LINES);
     // glColor3ub(0, 0, 0);
      //glVertex2f(0.4f, 0.7f);
     // glVertex2f(0.4f, -0.2f);

      glEnd();


      glBegin(GL_LINES);
      glColor3ub(0, 0, 0);
      glVertex2f(0.6f, 0.7f);
      glVertex2f(0.6f, -0.2f);

      glEnd();





      glFlush();
}
int main(int argc, char**argv){

       glutInit(&argc,argv);
       glutCreateWindow("OpenGL Setup test");
       glutInitWindowSize(320,320);
       glutDisplayFunc(display);
       glutMainLoop();
       return 0;




}





