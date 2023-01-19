// VulkanFun.cpp : Defines the entry point for the application.
//



#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <glm/glm.hpp>

#include "Application.h"

int main()
{
	TriangleApp App;

	try {
		App.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return App.exitCode;
	}
	return App.exitCode;
}
