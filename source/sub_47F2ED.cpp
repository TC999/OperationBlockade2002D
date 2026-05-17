//----- (0047F2ED) --------------------------------------------------------
int __cdecl sub_47F2ED(_DWORD *a1, int a2)
{
  int v2; // esi
  int result; // eax

  v2 = a1[96];
  if ( a2 )
  {
    result = a2 - 2;
    if ( a2 == 2 )
    {
      *(_DWORD *)(v2 + 4) = sub_47F2CA;
    }
    else
    {
      *(_DWORD *)(*a1 + 20) = 4;
      return (*(int (__cdecl **)(_DWORD *))*a1)(a1);
    }
  }
  else
  {
    result = a1[103];
    if ( *(_BYTE *)(result + 8) )
    {
      *(_DWORD *)(v2 + 4) = sub_47F1C2;
      result = sub_47EEBF(a1);
      *(_DWORD *)(v2 + 64) = 0;
      *(_DWORD *)(v2 + 68) = 0;
      *(_DWORD *)(v2 + 76) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = sub_47F15A;
    }
    *(_BYTE *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
  }
  return result;
}
