//----- (00402300) --------------------------------------------------------
char __cdecl sub_402300(char *self, int a2, int *a3, int *a4)
{
  double v5; // st7
  int v6; // ecx
  float v8; // [esp+Ch] [ebp-Ch] BYREF
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]

  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  sub_46C5C5(&v8, reinterpret_cast<float *>(a2), reinterpret_cast<float *>(self + 328));
  sub_46C5C5(&v8, &v8, reinterpret_cast<float *>(self + 264));
  if ( v10 <= 0.0 || v10 >= 1.0 )
  {
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    v9 = v9 * 0.5;
    v5 = 0.5 - v9;
    *a3 = (int)((v8 * 0.5 + 0.5) * (double)dword_5209F4);
    v6 = (int)(v5 * (double)dword_5209D8);
    *a4 = v6;
    if ( *a3 >= 0 && *a3 < dword_5209F4 && (double)v6 >= 0.0 && v6 < (int)dword_5209D8 )
      return 1;
  }
  return 0;
}
