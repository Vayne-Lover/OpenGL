//
//  main.cpp
//  OpenGLHelloWorld
//
//  Created by 姜况童 on 2016/6/26.
//  Copyright © 2016年 Vayne-Lover. All rights reserved.
//

#include <GLUT/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2d(-0.5, -0.5);
    glVertex2d(-0.5, 0.5);
    glVertex2d(0.5, 0.5);
    glVertex2d(0.5, -0.5);
    glEnd();
    glFlush();
}

int main(int argc, char ** argv) {
    
    glutInit(&argc, argv);//Deprecated
    glutCreateWindow("OpenGL Start Example");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
