//----- (00416290) --------------------------------------------------------
float *__thiscall sub_416290(float *this, float a2)
{
  double v2; // st7
  float *result; // eax

  v2 = 1.0 / a2;
  result = this;
  *this = v2 * *this;
  this[1] = v2 * this[1];
  this[2] = v2 * this[2];
  return result;
}
