//----- (004131D0) --------------------------------------------------------
float *__thiscall sub_4131D0(float *self, float *a2, float *a3)
{
  float *result; // eax
  long double v4; // st7
  long double v5; // st7
  float v6; // [esp+4h] [ebp+4h]

  result = a2;
  *a2 = *a2 - self[14];
  v4 = *a3 - self[15];
  *a3 = v4;
  v6 = atan2(v4, *a2);
  v5 = sqrt(v4 * v4 + *result * *result);
  *result = cos(v6 + self[16]) * v5;
  *a3 = sin(v6 + self[16]) * v5;
  *result = *result + self[14];
  *a3 = self[15] + *a3;
  return result;
}
