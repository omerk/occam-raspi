#include <wiringPi.h>

void r_pwm_init()
{
	if (wiringPiSetup() == -1){
		/*  return error - can't init wiringPi */
	}

	pinMode(1, PWM_OUTPUT);
}

void r_pwm_value(int val)
{
	pwmWrite(1, val);
}

void _pwm_init(int *w)
{
	r_pwm_init();
}

void _pwm_value(int *w)
{
	r_pwm_value((int)(w[0]));
}

