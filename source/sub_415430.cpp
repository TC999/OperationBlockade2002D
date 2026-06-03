//----- (00415430) --------------------------------------------------------
char __cdecl sub_415430(_DWORD *self, int a2)
{
  int v3; // eax
  int i; // edi
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // ebx
  int j; // edi
  int v10; // eax
  unsigned int v11; // ebx
  int k; // edi
  int v13; // eax
  float v15; // [esp+10h] [ebp-7Ch]
  int v16[3]; // [esp+14h] [ebp-78h] BYREF
  int v17[3]; // [esp+20h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+2Ch] [ebp-60h] BYREF
  int v19[3]; // [esp+38h] [ebp-54h] BYREF
  int v20[9]; // [esp+44h] [ebp-48h] BYREF
  int v21[9]; // [esp+68h] [ebp-24h] BYREF

  v3 = *(_DWORD *)(a2 + 4132);
  if ( v3 < 6 )
    return 1;
  v15 = 0.0;
  if ( v3 > 6 )
    v15 = (1.0 - *(float *)(a2 + 16)) * *(float *)(a2 + 4288) + (double)(v3 - 7) * *(float *)(a2 + 4288);
  sub_4183A0(a2, 0, v15);
  for ( i = 0; i < self[6]; ++i )
  {
    v5 = *(_DWORD *)(self[5] + 4 * i);
    if ( v5 != a2 && *(_BYTE *)(v5 + 4148) && *(_DWORD *)(v5 + 4144) == *(_DWORD *)(a2 + 4144) )
      sub_4183A0(a2, 0, v15);
  }
  if ( !(unsigned __int8)sub_418420(a2, 0, 0.1f, (_DWORD*)v17, (int)v20, (_DWORD*)v16) )
    return 1;
  while ( 1 )
  {
    v6 = 0;
    v15 = v15 + 0.1;
    if ( (int)self[6] > 0 )
      break;
LABEL_18:
    v8 = 0;
    for ( j = 0; ; j += 60 )
    {
      v10 = self[14];
      if ( !v10 || v8 >= (self[15] - v10) / 60 )
        break;
      if ( sub_40D330(
             (float *)(j + self[14]),
             (float *)(j + self[14] + 12),
             (float *)(j + self[14] + 48),
             (float *)v17,
             (float *)v20,
             (float *)v16) )
      {
        return 0;
      }
      ++v8;
    }
    v11 = 0;
    for ( k = 0; ; k += 16 )
    {
      v13 = self[10];
      if ( !v13 || v11 >= (self[11] - v13) >> 4 )
        break;
      if ( sub_40D900(k + v13, *(float *)(k + v13 + 12), (float *)v17, (float *)v20, (float *)v16) )
        return 0;
      ++v11;
    }
    if ( !(unsigned __int8)sub_418420(a2, 0, 0.1f, (_DWORD*)v17, (int)v20, (_DWORD*)v16) )
      return 1;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(self[5] + 4 * v6);
    if ( v7 != a2
      && *(_BYTE *)(v7 + 4148)
      && *(_DWORD *)(v7 + 4144) == *(_DWORD *)(a2 + 4144)
      && (unsigned __int8)sub_418420(a2, 0, 0.1f, (_DWORD*)v19, (int)v21, (_DWORD*)v18)
      && sub_40D330((float *)v17, (float *)v20, (float *)v16, (float *)v19, (float *)v21, (float *)v18) )
    {
      return 0;
    }
    if ( ++v6 >= self[6] )
      goto LABEL_18;
  }
}
