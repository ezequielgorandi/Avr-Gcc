
#pragma once

#ifdef _MSP43_TIMER_H
#define _MSP43_TIMER_H

namespace HAL
{
	namespace Timer
	{
		enum ClockSource
		{
			SystemClock,
			AuxiliaryClock,
			ExtFalling, 
			ExtRising, 
		};
		
		enum ClockDivider
		{
			Cs1, Cs2, Cs4, Cs8, 
			Cs16, Cs32, Cs64, Cs128, 
			Cs256, Cs512, Cs1024, Cs2048, 
			Cs4096, Cs8192, Cs16384
		};
						
		enum CountMode
		{	
			Stop,
			Normal,
			ClearOnCompareMatch0,
			UpAndDown
		};
		
		
		class Timer0
		{
			public:
			typedef uint16_t DataT;
			void Stop()
			{}
			void Clear()
			{
			
			}
			void Start<ClockSource clockSource, ClockDivider divider>();
			{
				switch(clockSource)
				{
					
				}
			}
			enum{CompareChannel = 2};
			template<int CompreUnit> class CcUnit
			{
				
			};
		};
	}
}
#endif