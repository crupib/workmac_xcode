
#pragma clang diagnostic push
#pragma clang diagnostic ignored"-Wdocumentation"
#define GLEW_STATIC
#include "/usr/local/Cellar/glew/2.1.0/include/GL/glew.h"
#include "/usr/local/Cellar/glfw/3.3/include/GLFW/glfw3.h"

#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
#include <iostream>
#define numVAOs 1
GLuint renderingProgram;
GLuint vao[numVAOs];
using namespace std;
GLuint createShaderProgram() {
    const char *vshaderSource =
        "#version 410    \n"
        "void main(void) \n"
        "{gl_Position = vec4(0.0,0.0,0.0,1.0);}";
    const char *fshaderSource =
        "#version 410    \n"
        "out vec4 color; \n"
        "void main(void) \n"
    "{if(gl_FragCoord.x < 200) color = vec4(0.0,1.0,0.0,1.0); else  color = vec4(1.0,0.0,0.0,1.0);}";
//        "{color = vec4(1.0,0.0,1.0,1.0);}";
    
    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    
    glShaderSource(vShader, 1, &vshaderSource,NULL);
    glShaderSource(fShader, 1, &fshaderSource,NULL);
    glCompileShader(vShader);
    glCompileShader(fShader);
    GLuint vfProgram = glCreateProgram();
    glAttachShader(vfProgram,vShader);
    glAttachShader(vfProgram,fShader);
    glLinkProgram(vfProgram);
    return vfProgram;
}

void init(GLFWwindow* window) {
    renderingProgram = createShaderProgram();
    glGenVertexArrays(numVAOs,vao);
    glBindVertexArray(vao[0]);
}

void display(GLFWwindow * window, double currentTime){
  //glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glUseProgram(renderingProgram);
    glPointSize(400.0f);
   //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glDrawArrays(GL_POINTS, 0, 1);
}

int main(int argc, const char * argv[]) {
    if (!glfwInit()) {exit(EXIT_FAILURE);}
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,1);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT,GL_TRUE);
    GLFWwindow * window = glfwCreateWindow(600, 600, "Chapter2 - program1", NULL, NULL);
    if (window == NULL) { printf("window\n");exit(EXIT_FAILURE);}
    int actualScreenWidth, actualScreenHeight;
    glfwGetFramebufferSize(window, &actualScreenWidth, &actualScreenHeight);
    glViewport(0,0, actualScreenWidth, actualScreenHeight);
    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    if (glewInit()!= GLEW_OK) { printf("Glew\n");exit(EXIT_FAILURE);}
    glfwSwapInterval(1);
    init(window);
    while (!glfwWindowShouldClose(window)){
        display(window,glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    printf("made it to the end\n");
    exit(EXIT_SUCCESS);
    
    return 0;
}
