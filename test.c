#include <stdio.h>
#include <stdint.h>
#include "irslinger.h"

int main(int argc, char *argv[])
{
	uint32_t outPin = 23;
	int frequency = 38000;
	double dutyCycle = 0.5;
	int leadingPulseDuration = 9000;
	int leadingGapDuration = 4500;
	int onePulse = 562;
	int zeroPulse = 562;
	int oneGap = 1688;
	int zeroGap = 562;
	int sendTrailingPulse = 1;

	int result = sendCode(
		outPin,
		frequency,
		dutyCycle,
		leadingPulseDuration,
		leadingGapDuration,
		onePulse,
		zeroPulse,
		oneGap,
		zeroGap,
		sendTrailingPulse,
		"01000001101101100101100010100111");
	
	return result;
}
