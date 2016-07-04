//
//  main.cpp
//  OpenGLExercise0
//
//  Created by 姜况童 on 7/4/16.
//  Copyright © 2016 Vayne-Lover. All rights reserved.
//

#include <iostream>
#include<GLUT/GLUT.h>

int main(int argc, const char * argv[]) {
    enum VAO_IDs{Triangles,NumVAOs};
    enum Buffer_IDs{ArrayBuffer,NumBuffers};
    enum Attrib_IDs{vPosition=0};
    GLuint VAOs[NumVAOs];
    GLuint Buffers[NumBuffers];
    const GLuint NumVertices=6;
    return 0;
}
