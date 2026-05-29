//----- (00449B70) --------------------------------------------------------
char __thiscall sub_449B70(_DWORD *self)
{
  int v2; // edi
  int v3; // ecx
  int v4; // esi
  _BYTE *v5; // eax
  int v6; // ecx

  self[5] = 0;
  v2 = 0;
  v3 = *(_DWORD *)(dword_520970 + 200);
  if ( *(int *)(v3 + 24) > 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 4 * v2);
      if ( (unsigned __int8)sub_4696E0(v4, aImpacts) )
      {
        if ( !_strcmpi(*(const char **)(v4 + 4), aDefaultImpacts) )
          break;
      }
      ++v2;
      v3 = *(_DWORD *)(dword_520970 + 200);
      if ( v2 >= *(_DWORD *)(v3 + 24) )
        goto LABEL_7;
    }
    self[5] = v4;
  }
LABEL_7:
  v5 = self + 8;
  v6 = 2024;
  do
  {
    *v5 = 0;
    v5 += 136;
    --v6;
  }
  while ( v6 );
  sub_4113F0((_DWORD *)dword_4F5CC4, (int)self, 65280, 1792, 0);
  self[6] = 2139095039;
  self[7] = -1;
  return 1;
}
