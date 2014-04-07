#pragma once
#ifndef WORLD_H_EGEPHYSICS
#define WORLD_H_EGEPHYSICS

#include <vector>
#include <EgeMath/Vector2.hpp>
#include <Ege2D/PhysicsObject.hpp>

namespace ege
{
	class World
	{
		World();
		~World();
		void setGravity(ege::Vector2 Gravity);
		void setTimeStep(float TimeStep);
		void update();
	private:
		std::vector<PhysicsObject*> m_gameObjects;
		ege::Vector2 m_gravity;
		float m_time;
		float m_timestep;
	};
}

#endif //WORLD_H_EGEPHYSICS