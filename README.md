# Project 4: PID Contoller

## Parameter tuning
Parameter tuning was performed by starting with the coefficient values provided in one of the lectures. First the coefficients for the speed PID were manually determined through trial and error. The angle PID worked well for a target speed of 40MPH. 

Higher speeds were attempted. While it is straightforward to determine the speed PID's parameter coefficients, I could not find the right values for the angle PID parameters. Time constraints mean the twiddle algorithm could not be implemented. Also, because of the various bends a constant high speed is probably not realistic. Again time constraints mean I have not been able to look into making speed dependent on, say, the weighted average of the last few steering angles.

Note that parameters were tuned while running the simulator using the Fantastic setting and 1024x768 resolution.

## P, I, D parameter effects
In general, increasing Kp seems to increase how fast the car turns/steers. Increasing Kd seems to reduce/eliminate overshooting, and with that, reduce oscillations. Ki seems to have little effect in this particular project, which probably means the simulated car has very little, if any, steering bias.