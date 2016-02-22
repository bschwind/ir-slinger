IR Slinger
==========

Small C library for sending NEC-like infrared packets on the Raspberry Pi

Dependencies
------------

* [libpigpio](https://github.com/joan2937/pigpio)

Build
-----

    gcc -c irslinger.c
    ar -crv irslinger.a irslinger.o
    gcc test.c irslinger.a -lm -lpigpio -pthread

GPIO Pin info from the pigpio repo:
-----------------------------------

ALL gpios are identified by their Broadcom number.  See elinux.org

There are 54 gpios in total, arranged in two banks.

Bank 1 contains gpios 0-31.  Bank 2 contains gpios 32-54.

A user should only manipulate gpios in bank 1.

There are at least three types of board.

Type 1

    26 pin header (P1).

    Hardware revision numbers of 2 and 3.

    User gpios 0-1, 4, 7-11, 14-15, 17-18, 21-25.

Type 2

    26 pin header (P1) and an additional 8 pin header (P5).

    Hardware revision numbers of 4, 5, 6, and 15.

    User gpios 2-4, 7-11, 14-15, 17-18, 22-25, 27-31.

Type 3

    40 pin expansion header (J8).

    Hardware revision numbers of 16 or greater.

    User gpios 2-27 (0 and 1 are reserved).
