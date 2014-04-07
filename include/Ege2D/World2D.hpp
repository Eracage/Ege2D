#pragma once
#ifndef WORLD2D_H_EGEPHYSICS
#define WORLD2D_H_EGEPHYSICS

#include <vector>
#include <EgeMath/Vector2.hpp>
#include <Ege2D/PhysicObject2D.hpp>


namespace ege
{
	float METERS_TO_PIXELS = 50;
	float GROUND_Y_IN_PIXELS = 700;

	class World2D
	{
	public:
		World2D();
		~World2D();
		void setGravity(const Vector2& Gravity);
		void setTimeStep(const float TimeStep);
		void update(float dt);
	private:
		std::vector<PhysicObject2D*> m_gameObjects;
		ege::Vector2 m_gravity;
		float m_time;
		float m_timestep;
		World2D(const World2D&);
	};
}

#endif //WORLD2D_H_EGEPHYSICS