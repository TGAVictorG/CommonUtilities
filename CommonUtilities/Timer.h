#pragma once
#include <chrono>

namespace CommonUtilities
{
	class Timer
	{
	public:
		Timer();
		Timer(const Timer& aTimer) = delete;
		Timer& operator=(const Timer& aTimer) = delete;
		void Update();
		float GetDeltaTime() const;
		double GetTotalTime() const;
	private:
		//double myTotalTime;
		std::chrono::duration<long long, std::nano> myDeltaTime;
		std::chrono::duration<long long, std::nano> myTotalTime;
		std::chrono::steady_clock::time_point myStartTime;
		std::chrono::high_resolution_clock myClock;
	};
}