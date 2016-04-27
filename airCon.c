#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "irslinger.h"

int main(int argc, char *argv[])
{
	uint32_t outPin = 23;
	int frequency = 38000;
	double dutyCycle = 0.5;
	int leadingPulseDuration = 3500;
	int leadingGapDuration = 1600;
	int onePulse = 400;
	int zeroPulse = 400;
	int oneGap = 1300;
	int zeroGap = 450;
	int sendTrailingPulse = 1;

	if (argc < 2)
	{
		exit(1);
	}

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
		argv[1]);
	
	return result;
}