//----- (0047C2DF) --------------------------------------------------------
int __cdecl sub_47C2DF(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // esi
  _DWORD *v9; // ecx
  int v10; // ecx
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+18h] [ebp+8h]
  _DWORD *v14; // [esp+1Ch] [ebp+Ch]

  v4 = a3;
  v12 = a1[1];
  if ( a3 > 0x3B9AC9F0 )
  {
    *(_DWORD *)(*a1 + 20) = 53;
    *(_DWORD *)(*a1 + 24) = 1;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  if ( (a3 & 7) != 0 )
  {
    v4 = 8 - (a3 & 7) + a3;
    a3 = v4;
  }
  if ( a2 >= 2 )
  {
    *(_DWORD *)(*a1 + 20) = 12;
    *(_DWORD *)(*a1 + 24) = a2;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  v13 = 0;
  v14 = (_DWORD *)(v12 + 4 * a2 + 48);
  v6 = (_DWORD *)*v14;
  if ( !*v14 )
    goto LABEL_11;
  do
  {
    if ( v6[2] >= v4 )
      break;
    v13 = (int)v6;
    v6 = (_DWORD *)*v6;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_11:
    v7 = v4 + 16;
    if ( v13 )
      v8 = dword_49C2A8[a2];
    else
      v8 = dword_49C2A0[a2];
    if ( v8 > 1000000000 - v7 )
      v8 = 1000000000 - v7;
    while ( 1 )
    {
      v6 = (_DWORD *)sub_47EDD8((int)a1, v8 + v7);
      if ( v6 )
        break;
      v8 >>= 1;
      if ( v8 < 0x32 )
      {
        *(_DWORD *)(*a1 + 20) = 53;
        *(_DWORD *)(*a1 + 24) = 2;
        (*(void (__cdecl **)(_DWORD *))*a1)(a1);
      }
    }
    *(_DWORD *)(v12 + 72) += v8 + v7;
    *v6 = 0;
    v6[1] = 0;
    v4 = a3;
    v9 = (_DWORD *)v13;
    v6[2] = a3 + v8;
    if ( !v13 )
      v9 = v14;
    *v9 = v6;
  }
  v10 = v6[1];
  v6[2] -= v4;
  v6[1] = v4 + v10;
  return (int)v6 + v10 + 16;
}
