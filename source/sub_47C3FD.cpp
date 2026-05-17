//----- (0047C3FD) --------------------------------------------------------
_DWORD *__cdecl sub_47C3FD(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int *v5; // eax
  int v6; // edx

  v3 = a1[1];
  if ( a3 > 0x3B9AC9F0 )
  {
    *(_DWORD *)(*a1 + 20) = 53;
    *(_DWORD *)(*a1 + 24) = 3;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  if ( (a3 & 7) != 0 )
    a3 += 8 - (a3 & 7);
  if ( a2 >= 2 )
  {
    *(_DWORD *)(*a1 + 20) = 12;
    *(_DWORD *)(*a1 + 24) = a2;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  v4 = (_DWORD *)sub_47EDD8((int)a1, a3 + 16);
  if ( !v4 )
  {
    *(_DWORD *)(*a1 + 20) = 53;
    *(_DWORD *)(*a1 + 24) = 4;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  *(_DWORD *)(v3 + 72) += a3 + 16;
  v5 = (int *)(v3 + 4 * a2 + 56);
  v6 = *v5;
  v4[2] = 0;
  *v4 = v6;
  v4[1] = a3;
  *v5 = (int)v4;
  return v4 + 4;
}
