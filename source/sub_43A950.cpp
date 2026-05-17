//----- (0043A950) --------------------------------------------------------
int __thiscall sub_43A950(int this)
{
  char *v2; // eax
  int v3; // eax
  int v4; // ecx
  INT v5; // eax
  int result; // eax

  sub_424630(*(int **)(this + 40));
  if ( !*(_DWORD *)(this + 84) )
  {
    v2 = sub_41DE10(*(_DWORD **)(dword_520970 + 120), aSoundsInterfac, 1, 0, 1, 0, 0);
    *(_DWORD *)(this + 84) = v2;
    sub_4282E0(v2 != 0, aCouldnTLoadBan);
  }
  v3 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), *(_DWORD *)(this + 84), 0, 1);
  v4 = *(_DWORD *)(this + 60);
  *(_DWORD *)(this + 80) = v3;
  *(_BYTE *)(v4 + 172) = byte_520974;
  *(_BYTE *)(*(_DWORD *)(this + 64) + 172) = byte_4A34BC;
  *(_BYTE *)(*(_DWORD *)(this + 72) + 172) = byte_4A9F14;
  *(_BYTE *)(*(_DWORD *)(this + 76) + 172) = byte_520884;
  *(_BYTE *)(*(_DWORD *)(this + 68) + 172) = byte_4AC684;
  sub_421190(*(_DWORD *)(*(_DWORD *)(this + 56) + 112), "%d%%", *(_DWORD *)&dword_4A34C0);
  sub_421190(*(_DWORD *)(*(_DWORD *)(this + 52) + 112), "%d%%", *(_DWORD *)&dword_4A1EC4);
  v5 = sub_422BA0(AppName, aMaxparticles, 256);
  if ( v5 > 64 )
  {
    if ( v5 > 128 )
    {
      if ( v5 >= 256 )
        *(_DWORD *)(this + 44) = 2;
    }
    else
    {
      *(_DWORD *)(this + 44) = 1;
    }
  }
  else
  {
    *(_DWORD *)(this + 44) = 0;
  }
  result = *(_DWORD *)(this + 44);
  switch ( result )
  {
    case 0:
      return sub_421110(*(LPVOID **)(*(_DWORD *)(this + 48) + 112), aLow);
    case 1:
      return sub_421110(*(LPVOID **)(*(_DWORD *)(this + 48) + 112), aMedium);
    case 2:
      return sub_421110(*(LPVOID **)(*(_DWORD *)(this + 48) + 112), aHigh);
  }
  return result;
}
