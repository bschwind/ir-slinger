#include <stdio.h>
#include "irslinger.h"

int main(int argc, char *argv[])
{
	uint32_t outPin = 23;           // The GPIO pin number the signal will be sent on
	int frequency = 36000;          // The frequency of the IR signal in Hz
	double dutyCycle = 0.33;        // The duty cycle of the IR signal

	int pulseDuration = 889;        // The duration of the the pulses in microseconds

	int result = irSlingRC5(outPin, frequency, dutyCycle, pulseDuration, "11010101001100");

	return result;
}