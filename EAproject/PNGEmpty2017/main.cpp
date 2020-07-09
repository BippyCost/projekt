#include <iostream>
#include "GL/freeglut.h"
#include <string>
#include "Sprite.h"

using namespace std;

void initRendering() {
	glEnable(GL_DEPTH_TEST);                    // test 3D depth
	glEnable(GL_BLEND); 
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


}

void cameraSetup(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);                // select projection matrix
	glLoadIdentity();                           // reset projection matrix
												//gluPerspective(45.0, 1, 1.0, 100.0);        // set up a perspective projection matrix
	gluOrtho2D(0, w, 0, h);
}

void display() {
	glClearColor(0.5, 0.5, 0.5, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear Screen and Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	glutSwapBuffers();
}

int main(int argc, char **argv) {
<<<<<<< HEAD
	std::cout << "Bruh \n";
=======
	std::cout << "Programmer: <tonyowngisabitch>\n";
>>>>>>> 03ba28b9eb6c6a55cb3a83bb7e3027886bee8bef
	std::cout << "Compiled on " << __DATE__ << ", " << __TIME__ << std::endl << std::endl;

	// init GLUT and create Window
	glutInit(&argc, argv);                      // GLUT initialization
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 800);               // set the window size

	// create the window
	glutCreateWindow("Introduction to OpenGL");
	initRendering();                            // initialize rendering

	// register handler functions
	glutReshapeFunc(cameraSetup);               // resiz window and camera setup
	glutDisplayFunc(display);                   // Display function
	
	glutMainLoop();                             // run GLUT mainloop
	return(0);                                  // this line is never reached
}
