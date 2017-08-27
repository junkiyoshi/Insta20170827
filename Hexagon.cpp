#include "Hexagon.h"

Hexagon::Hexagon() : Hexagon(ofVec3f(0, 0, 0), 0, 0, 0)
{

}

Hexagon::Hexagon(ofVec3f location, float radius, int color_value, int deg)
{
	this->location = location;
	this->deg = deg;
	this->radius = radius;
	this->line_color.setHsb(color_value, 255, 255);
}

Hexagon::~Hexagon()
{

}

void Hexagon::update()
{
	this->radius += 30;

	int i = 0;
	for (int deg = 0; deg < 360; deg += 60)
	{
		float x = this->radius * cos(deg * DEG_TO_RAD);
		float y = this->radius * sin(deg * DEG_TO_RAD);
		
		vertexes[i] = ofVec3f(x, y, 0);
		i += 1;
	}
}

void Hexagon::draw()
{
	ofPushMatrix();
	ofRotateZ(this->deg);

	ofSetColor(this->line_color);
	ofLine(vertexes[0], vertexes[1]);
	ofLine(vertexes[1], vertexes[2]);
	ofLine(vertexes[2], vertexes[3]);
	ofLine(vertexes[3], vertexes[4]);
	ofLine(vertexes[4], vertexes[5]);
	ofLine(vertexes[5], vertexes[0]);

	ofPopMatrix();
}