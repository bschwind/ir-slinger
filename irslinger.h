#ifndef IRSLINGER_H
#define IRSLINGER_H

#include <stdint.h>

#define MAX_COMMAND_SIZE 512
#define MAX_PULSES 12000

int sendCode(
	uint32_t outPin,
	int frequency,
	double dutyCycle,
	int leadingPulseDuration,
	int leadingGapDuration,
	int onePulse,
	int zeroPulse,
	int oneGap,
	int zeroGap,
	int sendTrailingPulse,
	const char *code);

#endif
