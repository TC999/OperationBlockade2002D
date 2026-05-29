//----- (00419C40) --------------------------------------------------------
bool __thiscall sub_419C40(int self, float *a2)
{
  double v2; // st7

  v2 = *a2 * *a2 + a2[1] * a2[1];
  return v2 >= *(float *)(self + 4300) * *(float *)(self + 4300)
      && (!*(_BYTE *)(self + 4316) || v2 <= *(float *)(self + 4304) * *(float *)(self + 4304))
      && a2[2] >= (double)*(float *)(self + 4308)
      && a2[2] <= (double)*(float *)(self + 4312);
}
