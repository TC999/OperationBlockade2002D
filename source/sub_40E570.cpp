//----- (0040E570) --------------------------------------------------------
float *__thiscall sub_40E570(float *this, float *a2, float *a3)
{
  float *result; // eax
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]

  v4 = *this + *a3;
  v5 = this[1] + a3[1];
  result = a2;
  v6 = this[2] + a3[2];
  *a2 = v4;
  a2[1] = v5;
  a2[2] = v6;
  return result;
}
