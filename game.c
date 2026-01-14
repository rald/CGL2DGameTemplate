#include "glfw.h"
#include "gl2d.h"

#include <stdbool.h>
#include <math.h>



#define GAME_TITLE "CGL2DGameTemplate"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480



int main(int argc, char *argv[]) {

	bool quit=false;
	double timeStart=0;

	glScreenInit(SCREEN_WIDTH,SCREEN_HEIGHT);

	glfwSetWindowTitle(GAME_TITLE);

	glfwSwapInterval(1);

	glBlendMode(GL2D_ALPHA);

	while(!quit) {

		glBoxFilled(0,0,SCREEN_WIDTH,SCREEN_HEIGHT,GL2D_RGBA(0,0,0,255));

		glLine(0,0,50,50,GL2D_RGBA(255,255,255,255));

		glBox(75,0,125,50,GL2D_RGBA(255,255,255,255));

		glEllipse(175,25,25,25,0,GL2D_RGBA(255,255,255,255));

		glBoxFilled(225,0,275,50,GL2D_RGBA(255,255,255,255));

		glEllipseFilled(325,25,25,25,0,GL2D_RGBA(255,255,255,255));

		glfwSwapBuffers();

		timeStart = glfwGetTime();
		while(glfwGetTime()-timeStart < 1.0/60.0) {};

		quit = glfwGetKey(GLFW_KEY_ESC) | !glfwGetWindowParam(GLFW_OPENED);

	}

	glfwTerminate();

	return 0;
}
