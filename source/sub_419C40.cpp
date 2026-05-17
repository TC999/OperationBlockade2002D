//----- (00419C40) --------------------------------------------------------
bool __thiscall sub_419C40(int this, float *a2)
{
  double v2; // st7

  v2 = *a2 * *a2 + a2[1] * a2[1];
  return v2 >= *(float *)(this + 4300) * *(float *)(this + 4300)
      && (!*(_BYTE *)(this + 4316) || v2 <= *(float *)(this + 4304) * *(float *)(this + 4304))
      && a2[2] >= (double)*(float *)(this + 4308)
      && a2[2] <= (double)*(float *)(this + 4312);
}
