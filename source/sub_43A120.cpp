//----- (0043A120) --------------------------------------------------------
int __thiscall sub_43A120(int this, int a2)
{
  int result; // eax
  double v3; // st7
  double v4; // st7

  *(_DWORD *)(this + 456) = dword_4AA62C[2 * a2];
  result = dword_4AA628[2 * a2];
  v3 = *(float *)(this + 456) - *(float *)(this + 436);
  *(_DWORD *)(this + 460) = result;
  *(_DWORD *)(this + 444) = 1056964608;
  *(float *)(this + 448) = v3 + v3;
  v4 = *(float *)(this + 460) - *(float *)(this + 440);
  *(float *)(this + 452) = v4 + v4;
  return result;
}
