#pragma once
#ifndef PHYSICOBJECT2D_H_EGEPHYSICS
#define PHYSICOBJECT2D_H_EGEPHYSICS

#include <EgeMath/Vector2.hpp>
#include <list>

namespace ege
{

	extern class World2D;


	class PhysicObject2D
	{
		enum EVENT_TYPE
		{
			FORCE,
			POSITION,
			VELOCITY
		};
		struct TIMED_EVENT
		{
			EVENT_TYPE type;
			float startTime,time;
			Vector2 direction;
		};
		struct CONSTANT_EVENT
		{
			bool enabled;
			Vector2 direction;
		};

		friend class World2D;
	public:

		enum SHAPE
		{
			NO_SHAPE,
			CIRCLE,
			RECTANGLE,
			CONTAINRECTANGLE
		};

		PhysicObject2D();
		PhysicObject2D(Vector2 Position);
		virtual ~PhysicObject2D();


		void setConstantForce(const Vector2& Force, bool enable = true);
		void CreateImpulse(const Vector2& Force, const float Time);
		void ApplyForce(const Vector2& Force);

		void setConstantPosition(const Vector2& Position, bool enable = true);
		void MoveTo(const Vector2& Position, const float Time);
		void Teleport(const Vector2& Position);

		void setConstantVelocity(const Vector2& Velocity, bool enable = true);
		void AccelerateTo(Vector2& Velocity, const float Time);
		void SetVelocity(const Vector2& Velocity);

		void UpdateSize();

	protected:

		virtual void PreUpdate(float dt);
		virtual void PostUpdate(float dt);

	private:
		void Update(float dt);




		Vector2 m_velocity;
		Vector2 m_position;

		float m_radius_Pow2;


		SHAPE m_shape;

		bool m_hasConstant;
		CONSTANT_EVENT m_constants[3];

		bool m_hasTimed;
		std::list<TIMED_EVENT> m_timedEvents;
	};
}

#endif //PHYSICOBJECT2D_H_EGEPHYSICS
