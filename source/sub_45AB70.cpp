//----- (0045AB70) --------------------------------------------------------
int __thiscall sub_45AB70(_DWORD *self)
{
  int v1; // edi
  int v2; // edx
  int v3; // esi
  int v4; // ebx
  int result; // eax

  v1 = 0;
  *(float *)(352 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 512) + *(_DWORD *)(dword_520970 + 280) + 924) = *(float *)(self[19] + 256);
  v2 = 260;
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 0;
  do
  {
    v3 = *(_DWORD *)(dword_520970 + 280);
    v4 = *(_DWORD *)(self[19] + v2);
    v2 += 4;
    result = v1 + 88 * *(_DWORD *)(v3 + 512);
    ++v1;
    *(_DWORD *)(v3 + 4 * result + 932) = v4;
  }
  while ( v2 < 300 );
  return result;
}
