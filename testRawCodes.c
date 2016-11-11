#include <stdio.h>
#include "irslinger.h"

int main(int argc, char *argv[])
{
	uint32_t outPin = 4;            // The Broadcom pin number the signal will be sent on
	int frequency = 38000;          // The frequency of the IR signal in Hz
	double dutyCycle = 0.5;         // The duty cycle of the IR signal. 0.5 means for every cycle,
	                                // the LED will turn on for half the cycle time, and off the other half

	int codes[] = {
		9000, 4500, 600, 600, 600, 1688, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
		600, 1688, 600, 1688, 600, 600, 600, 1688, 600, 1688, 600, 600, 600, 1688, 600, 1688,
		600, 600, 600, 600, 600, 1688, 600, 600, 600, 1688, 600, 1688, 600, 600, 600, 600,
		600, 600, 600, 1688, 600, 600, 600, 1688, 600, 600, 600, 600, 600, 1688, 600, 1688,
		600, 1688, 600};

	int result = irSlingRaw(
		outPin,
		frequency,
		dutyCycle,
		codes,
		sizeof(codes) / sizeof(int));
	
	return result;
}
