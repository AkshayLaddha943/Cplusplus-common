#include <iostream>

float distance (float velocity, float acceleration, float time) {

	return velocity * time + 0.5 * acceleration * time * time;

}

int main ()
{
	std::cout << distance(5,2,4) << std::endl;
	std::cout << distance(12.1, 10.0, 14.5) << std::endl;
	return 0;
}