//----- (00416260) --------------------------------------------------------
float *__thiscall sub_416260(float *this, float *a2)
{
  float *result; // eax

  result = this;
  *this = *this - *a2;
  this[1] = this[1] - a2[1];
  this[2] = this[2] - a2[2];
  return result;
}
