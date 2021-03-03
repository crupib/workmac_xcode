// added so that documentation errors are suppressed in XCode
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

#include <iostream>//
#define GLEW_STATIC
//#include "/usr/local/Cellar/glew/2.2.0_1/include/GL/glew.h"
#include <glew.h>
//#include "/usr/local/Cellar/glfw/3.3.3/include/GLFW/glfw3.h"

#include <glfw3.h>
#include <CoreGraphics/CoreGraphics.h>

using namespace std;

#define numVAOs 1

GLuint rendering_program;
GLuint vao[numVAOs];
size_t h ;
size_t w;
GLuint createShaderProgram() {
    const char *vshaderSource =
    "#version 410 \n"
    "void main(void) \n"
    "{ gl_Position = vec4(0.0, 0.0, 0.0, 1.0); }";
    
    const char *fshaderSource =

    "#version 410    \n"
    "out vec4 color; \n"
    "void main(void) \n"
    "{if(gl_FragCoord.x < 590) color = vec4(0.0,1.0,0.0,1.0); else  color = vec4(1.0,0.0,0.0,1.0);}";


    GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
    GLuint vfprogram = glCreateProgram();
    
    glShaderSource(vShader, 1, &vshaderSource, NULL);
    glShaderSource(fShader, 1, &fshaderSource, NULL);
    glCompileShader(vShader);
    glCompileShader(fShader);
    
    glAttachShader(vfprogram, vShader);
    glAttachShader(vfprogram, fShader);
    glLinkProgram(vfprogram);
    
    return vfprogram;
}

void init(GLFWwindow* window) {
    rendering_program = createShaderProgram();
    glGenVertexArrays(numVAOs, vao);
    glBindVertexArray(vao[0]);
    cout << glGetString(GL_VERSION) << endl;
}


void display(GLFWwindow * window, double currentTime){
  //glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glUseProgram(rendering_program);
    glPointSize(400.0f);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glDrawArrays(GL_POINTS, 0, 1);
}

int main(void) {
    auto mainDisplayId = CGMainDisplayID();


    w = CGDisplayPixelsWide(mainDisplayId);
    h =  CGDisplayPixelsHigh(mainDisplayId);

    if (!glfwInit()) { exit(EXIT_FAILURE); }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,1);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT,GL_TRUE);
    GLFWwindow * window = glfwCreateWindow(600, 600, "Chapter2 - program1", NULL, NULL);
    if (window == NULL) { printf("window\n");exit(EXIT_FAILURE);}
    int actualScreenWidth;
    int actualScreenHeight;
    glfwGetFramebufferSize(window, &actualScreenWidth, &actualScreenHeight);
    
    glfwMakeContextCurrent(window);
    
    // added for Mac
    glewExperimental = GL_TRUE;
    
    if (glewInit() != GLEW_OK) { exit(EXIT_FAILURE); }
    
    // added for Mac screens
    glViewport(0,0,actualScreenWidth,actualScreenHeight);
    
    glfwSwapInterval(1);
    
    init(window);
    
    while (!glfwWindowShouldClose(window)) {
        display(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}


