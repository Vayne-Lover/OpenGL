//
//  main.cpp
//  OpenGLExercise0
//
//  Created by 姜况童 on 7/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<GLUT/GLUT.h>

using namespace std;

enum VAO_IDs{Triangles,NumVAOs};
enum Buffer_IDs{ArrayBuffer,NumBuffers};
enum Attrib_IDs{vPosition=0};
GLuint VAOs[NumVAOs];
GLuint Buffers[NumBuffers];
const GLuint NumVertices=6;

void
init(void)
{
    glGenVertexArraysAPPLE(NumVAOs, VAOs);
    glBindVertexArrayAPPLE(VAOs[Triangles]);
    
    GLfloat vertices[NumVertices][2]={
        {-0.9,-0.9},
        {0.85,-0.9},
        {-0.9,0.85},
        {0.9,-0.85},
        {0.9,0.9},
        {-0.85,0.9},
    };
    
    glGenBuffers(NumBuffers, Buffers);
    glBindBuffer(GL_ARRAY_BUFFER,Buffers[ArrayBuffer]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    ShaderInfo shaders[]={
        {GL_VERTEX_SHADER,"triangles.vert"},
        {GL_FRAGMENT_SHADER,"triangles.frag"},
        {GL_NONE,NULL}
    };
    
    GLuint program=LoadShaders(shaders);
    glUseProgram(program);
    glVertexAttribPointer(vPosition, 2, GL_FLOAT, GL_FALSE, 0, BUFFER_OFFSET(0));
    glEnableVertexAttribArray(vPosition);
}


int main(int argc, const char * argv[]) {

    
    return 0;
}
