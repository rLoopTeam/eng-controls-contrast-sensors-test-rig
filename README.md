# eng-controls-contrast-sensors-test-rig

Test setup:
* Tester: Daniel Faber
* see photos
* sensors numbered 1, 2 and 3
* first tests done with sensor 1
* sensor has prespex window (looks like 1/4" thick)
* there is a little dust on the window, but not much.
* sensor is mounted on a tripod perpendicular to the wheel, with the laser dot hitting the tape half-way between inside and outside edges.
* 

Sensor 1 sensitivity calibration:
* verified that under some coditions the indicator LED woudl turn on and off
* set it up on the tripod, with the perspex window
* turned the calibration knob left for several turns. eventually it goes "off" when pointing at the bare metal. Still goes "on" when pointed at the tape
* kept turning and turning the calibration knob to the left but could not get the indicator LED to go "off" when pointing at the tape. Eventually gave up.
* Left the calibration knob in that position
* moved the wheel by hand and the LED goes on when he laser dot is on the tape and off when it is on the bare metal.

1st high speed test:
* Sensor #1
* start at low speed
* move myself outside the room, just in case. I don't have eyes on the test setup at high speed.
* ramp up over 15 seconds to 50% on the dial
* ramp down over 15 seconds
* stop
* plot the data in Excel and it looks really messy. clearly there is a problme.
* Let's try a low speed test

1st low speed test:
* Sensor #1
* turn on at low speed
* run for 15 seconds
* turn off
* plot the data in Excel and it looks really messy. clearly there is a problem.

Sean, ? and ? (Kyle?) entered the room. run a low speed test for them:

2nd low speed test:
* Sensor #1
* turn on at low speed
* run for 15 seconds
* turn off
* plot the data in Excel and it looks really messy. clearly there is a problem.

3rd low speed test:
* Sensor #1
* turn on at low speed
* very quickly Sean (?) saw that the cable from the sensor was touching the chasis of the test rig.
* Sean moved the cable away from the test rig.
* Visually we now see that the data is clean. It must be EMI from the big motor on the test rig.
* NOTE: DURING INTEGRATION BE SURE TO SHIELD THE CABLES AND ELECTRONICS! EMI IS A PROBLEM!
* run for 15 seconds. Twiddle the speed knob a little.
* turn off
* plot the data in Excel and it looks much better soon after the beginning. Problem found/solved.

2nd high speed test:
* Sensor #1
* note: locked the wheels of the test rig. It may have moved as I nudged it. re-aligned the laser dot tot he middle of the tape.
* start at low speed
* ramp up over 15 seconds to 50% on the dial
* ramp down over 15 seconds
* stop
* plot the data in Excel and it looks good
* looks like we reached 72.3 m/s at 100% power

TAPE DOWN THE CALIBRATION KNOBS.

Calibration of Sensor #2
* observed same behaviour as sensor #1. Did the exact same thing.

3rd high speed test:
* Sensor #2
* start at low speed
* ramp up over 15 seconds to 50% on the dial
* ramp down over 15 seconds
* stop
* plot the data in Excel and it looks good
* looks like we reached 72.0 m/s at 100% power

TAPE DOWN THE CALIBRATION KNOBS.

Calibration of Sensor #3
* observed same behaviour as sensor #1. Did the exact same thing.

4th high speed test:
* Sensor #3
* start at low speed
* ramp up over 15 seconds to 50% on the dial
* ramp down over 15 seconds
* stop
* plot the data in Excel and it looks good
* looks like we reached 71.6 m/s at 100% power

TAPE DOWN THE CALIBRATION KNOBS.



