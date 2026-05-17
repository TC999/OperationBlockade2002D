//----- (0040CC10) --------------------------------------------------------
BOOL __cdecl sub_40CC10(float *a1, float *a2, float *a3, float *a4)
{
  return *a1 <= (double)*a4
      && *a2 >= (double)*a3
      && a1[1] <= (double)a4[1]
      && a2[1] >= (double)a3[1]
      && a1[2] <= (double)a4[2]
      && a2[2] >= (double)a3[2];
}
