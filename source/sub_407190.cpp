//----- (00407190) --------------------------------------------------------
void *__cdecl sub_407190(_DWORD *self, int a2, char a3)
{
  int v3; // esi
  void *v4; // edx
  int v5; // ebp
  int v6; // eax

  if ( a2 < 0 || a2 > self[5] )
    return 0;
  v3 = self[6] + 96 * a2;
  v4 = *(void **)(v3 + 92);
  v5 = *(_DWORD *)(self[7] + 4) + 172 * a2;
  if ( !v4 )
  {
    if ( a3 )
    {
      v4 = operator new(0x5Cu);
      *(_DWORD *)(v3 + 92) = v4;
      memset(v4, 0, 0x5Cu);
      *((_DWORD *)v4 + 15) = 0;
      *((_DWORD *)v4 + 14) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 10) = 0;
      *((_DWORD *)v4 + 9) = 0;
      *((_DWORD *)v4 + 8) = 0;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 4) = 0;
      *((_DWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 2) = 0;
      *((_DWORD *)v4 + 16) = 1065353216;
      *((_DWORD *)v4 + 11) = 1065353216;
      *((_DWORD *)v4 + 6) = 1065353216;
      *((_DWORD *)v4 + 1) = 1065353216;
      *((_BYTE *)v4 + 76) = 0;
      *((_BYTE *)v4 + 77) = 1;
      v6 = *(_DWORD *)(v5 + 52);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 73) )
          *((_BYTE *)v4 + 76) = 1;
      }
    }
  }
  return v4;
}
