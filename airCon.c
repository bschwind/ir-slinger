#include <stdio.h>
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
		"100000000000100000000000000000101111110111111111000000000011001111001100010010011011011011001000001101110000011011111001000000001111111100000000111111110000000011111111000000001111111100000000111111110110101010010101100010110111010000000000111111110000000011111111");
	
	return result;
}
