#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  // Init the coefficients
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  // Init the errors
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  // Set the previous CTE to the current CTE for the first iteration only
  if (p_error == 0)
    p_error = cte;

  // Update the errors
  d_error = cte - p_error;
  p_error = cte;
  i_error += cte;
}

double PID::TotalError() {
  return -Kp * p_error - Kd * d_error - Ki * i_error;
}

