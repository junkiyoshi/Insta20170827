#pragma once
#include "ofMain.h"

class Hexagon
{
public:
	Hexagon();
	Hexagon(ofVec3f location, float radius, int color_value, int deg);
	~Hexagon();

	void update();
	void draw();
private:
	ofVec3f location;
	int deg;
	float radius;
	ofVec3f vertexes[6];
	ofColor line_color;
};