# CarND-Controls-PID

Parameter tuning was performed by starting with the coefficient values provided in one of the lectures. First the coefficients for the speed PID were manually determined through trial and error. The angle PID worked well for a target speed of 40MPH. 

Higher speeds were attempted. While it is straightforward to determine the speed PID's parameter coefficients, I could not find the right values for the angle PID parameters. Time constraints mean the twiddle algorithm could not be implemented.

In general, increasing Kp seems to increase oscillation while increasing Kd seems to make oscillations stop quicker as the coefficient value is increased.