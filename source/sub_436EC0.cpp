//----- (00436EC0) --------------------------------------------------------
unsigned int __cdecl sub_436EC0(_DWORD *self, unsigned int a2, int a3, int ArgList)
{
  unsigned int result; // eax
  _DWORD *v5; // esi
  int v6; // eax
  double v7; // st6
  double v8; // st7
  double v9; // st6
  int v10; // [esp-10h] [ebp-1Ch]
  int v11; // [esp+10h] [ebp+4h]
  int v12; // [esp+14h] [ebp+8h]

  result = a2;
  if ( a2 < 4 )
  {
    v5 = &self[13 * a2 + 12];
    self[13 * a2 + 15] = a3;
    sub_421110((LPVOID *)self[13 * a2 + 23], aScore);
    v6 = v5[11];
    v11 = v5[1] + 60;
    v12 = *(int *)(v6 + 28);
    v7 = (double)(unsigned int)dword_5209F4 - *(float *)(v6 + 24);
    *(_BYTE *)(v6 + 32) = 0;
    *(float *)(v6 + 12) = v7;
    *(float *)(v6 + 16) = (float)v11;
    *(_DWORD *)(v5[11] + 20) = 1064514355;
    v10 = v5[12];
    v5[4] = ArgList;
    sub_421190(v10, "%d", ArgList);
    result = v5[12];
    v8 = (double)(v5[1] + 60) + *(float *)&v12;
    v9 = (double)(unsigned int)dword_5209F4 - *(float *)(result + 24);
    *(_BYTE *)(result + 32) = 0;
    *(float *)(result + 12) = v9;
    *(float *)(result + 16) = v8;
    *(_DWORD *)(v5[12] + 20) = 1064514355;
  }
  return result;
}
