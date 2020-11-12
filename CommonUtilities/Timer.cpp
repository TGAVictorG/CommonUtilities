#include "pch.h"
#include "framework.h"
#include "Timer.h"

namespace CommonUtilities
{
	Timer::Timer() :
		myTotalTime(std::chrono::duration<long long, std::nano>::zero()),
		myDeltaTime(std::chrono::duration<long long, std::nano>::zero()),
		myStartTime(myClock.now()) { }

	void Timer::Update()
	{
		auto current = myClock.now();
		auto timeSinceStart = current - myStartTime;

		myDeltaTime = timeSinceStart - myTotalTime;
		myTotalTime = timeSinceStart;
	}

	float Timer::GetDeltaTime() const
	{
		return std::chrono::duration<float>(myDeltaTime).count();
	}

	double Timer::GetTotalTime() const
	{
		return std::chrono::duration<double>(myTotalTime).count();
	}
}