//----- (0043A120) --------------------------------------------------------
int __cdecl sub_43A120(int self, int a2)
{
  int result; // eax
  double v3; // st7
  double v4; // st7

  *(_DWORD *)(self + 456) = dword_4AA62C[2 * a2];
  result = dword_4AA628[2 * a2];
  v3 = *(float *)(self + 456) - *(float *)(self + 436);
  *(_DWORD *)(self + 460) = result;
  *(_DWORD *)(self + 444) = 1056964608;
  *(float *)(self + 448) = v3 + v3;
  v4 = *(float *)(self + 460) - *(float *)(self + 440);
  *(float *)(self + 452) = v4 + v4;
  return result;
}
