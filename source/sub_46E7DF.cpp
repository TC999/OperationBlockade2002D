//----- (0046E7DF) --------------------------------------------------------
int __cdecl sub_46E7DF(_DWORD *self)
{
  _DWORD *v1; // edi
  unsigned int v2; // esi
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  char *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // [esp-8h] [ebp-28h]
  unsigned int v13; // [esp+8h] [ebp-18h]
  int v14; // [esp+Ch] [ebp-14h]
  unsigned int v15; // [esp+10h] [ebp-10h]
  unsigned int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  unsigned int v18; // [esp+18h] [ebp-8h]
  unsigned int v19; // [esp+18h] [ebp-8h]
  char *i; // [esp+1Ch] [ebp-4h]

  v1 = (_DWORD *)*self;
  v2 = *(_DWORD *)(*self + 4148);
  v18 = *(_DWORD *)(*self + 4144);
  if ( (((unsigned __int8)v2
       | (unsigned __int8)(*(_BYTE *)(*self + 4144) | *(_BYTE *)(*self + 4152) | *(_BYTE *)(*self + 4156)))
      & 3) != 0 )
    return -2147467259;
  v4 = self[1];
  v5 = *(_DWORD *)(v4 + 4148);
  v15 = *(_DWORD *)(v4 + 4144);
  if ( (((unsigned __int8)v5 | (unsigned __int8)(v15 | *(_BYTE *)(v4 + 4152) | *(_BYTE *)(v4 + 4156))) & 3) != 0 )
    return -2147467259;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 == 827611204 )
  {
    v12 = 8;
  }
  else
  {
    if ( v6 != 844388420 && v6 != 861165636 && v6 != 877942852 && v6 != 894720068 )
      return -2147467259;
    v12 = 16;
  }
  v13 = v12 * (*(_DWORD *)(v4 + 4176) >> 2);
  v17 = *(_DWORD *)(v4 + 24)
      + v12 * (v15 >> 2)
      + *(_DWORD *)(v4 + 4160) * *(_DWORD *)(v4 + 4172)
      + *(_DWORD *)(v4 + 4168) * (v5 >> 2);
  v16 = 0;
  v14 = v1[6] + v12 * (v18 >> 2) + v1[1040] * v1[1043] + v1[1042] * (v2 >> 2);
  if ( *(_DWORD *)(v4 + 4184) )
  {
    v7 = *(_DWORD *)(v4 + 4180);
    v8 = self;
    do
    {
      v19 = 0;
      v9 = (char *)v17;
      for ( i = (char *)v14; v19 < v7; i += *(_DWORD *)(*v8 + 4168) )
      {
        v19 += 4;
        qmemcpy(v9, i, v13);
        v10 = v8[1];
        v9 += *(_DWORD *)(v10 + 4168);
        v7 = *(_DWORD *)(v10 + 4180);
      }
      v11 = v8[1];
      v17 += *(_DWORD *)(*v8 + 4172) + *(_DWORD *)(v11 + 4172);
      ++v16;
    }
    while ( v16 < *(_DWORD *)(v11 + 4184) );
  }
  return 0;
}
