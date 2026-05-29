//----- (0046C811) --------------------------------------------------------
float *__thiscall sub_46C811(float *self, unsigned int a2)
{
  float *result; // eax

  result = self;
  *self = (double)BYTE2(a2) * 0.0039215689;
  self[1] = (double)BYTE1(a2) * 0.0039215689;
  self[2] = (double)(unsigned __int8)a2 * 0.0039215689;
  self[3] = (double)HIBYTE(a2) * 0.0039215689;
  return result;
}
