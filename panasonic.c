#include <stdio.h>
#include "irslinger.h"

int main(int argc, char *argv[])
{
	uint32_t outPin = 4;            // The Broadcom pin number the signal will be sent on
	int frequency = 38000;          // The frequency of the IR signal in Hz
	double dutyCycle = 0.5;         // The duty cycle of the IR signal. 0.5 means for every cycle,
	                                // the LED will turn on for half the cycle time, and off the other half

	int leadingPulseDuration = 3500; // The duration of the beginning pulse in microseconds
	int leadingGapDuration = 1750;   // The duration of the gap in microseconds after the leading pulse
	int onePulse = 435;              // The duration of a pulse in microseconds when sending a logical 1
	int zeroPulse = 435;             // The duration of a pulse in microseconds when sending a logical 0
	int oneGap = 1300;               // The duration of the gap in microseconds when sending a logical 1
	int zeroGap = 435;               // The duration of the gap in microseconds when sending a logical 0
	int sendTrailingPulse = 1;       // 1 = Send a trailing pulse with duration equal to "onePulse"
	                                 // 0 = Don't send a trailing pulse

	if (argc < 2)
	{
		exit(1);
	}

	int codes[] = { 3500, 1750, 435, 435, 435, 1300, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 1300, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 1300, 435, 1300, 435, 1300, 435, 435, 435, 435, 435, 1300, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435,  435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, 1300, 435, 1300, 435, 435, 435, 435, 435, 435, 435, 435, 435, 435, /*Trailing Pulse*/ 435, 10000 };

	int result = irSlingRawPrefix(
		outPin,
		frequency,
		dutyCycle,
		codes,
		sizeof(codes) / sizeof(int),

		leadingPulseDuration,
		leadingGapDuration,
		onePulse,
		zeroPulse,
		oneGap,
		zeroGap,
		sendTrailingPulse,
		argv[1]);
	
	return result;
}
