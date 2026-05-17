//----- (0046C811) --------------------------------------------------------
float *__thiscall sub_46C811(float *this, unsigned int a2)
{
  float *result; // eax

  result = this;
  *this = (double)BYTE2(a2) * 0.0039215689;
  this[1] = (double)BYTE1(a2) * 0.0039215689;
  this[2] = (double)(unsigned __int8)a2 * 0.0039215689;
  this[3] = (double)HIBYTE(a2) * 0.0039215689;
  return result;
}
