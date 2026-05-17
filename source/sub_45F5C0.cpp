//----- (0045F5C0) --------------------------------------------------------
char __thiscall sub_45F5C0(int this, int a2, int a3)
{
  bool v4; // zf

  if ( a2 == 2 )
  {
    if ( (_BYTE)a3 )
    {
      if ( *(_DWORD *)(this + 2636) )
      {
        *(_BYTE *)(this + 2644) = 1;
        return sub_4285F0((_DWORD *)this, 2, a3);
      }
    }
    else
    {
      v4 = *(_BYTE *)(this + 2645) == 0;
      *(_BYTE *)(this + 2644) = 0;
      if ( !v4 )
      {
        *(_BYTE *)(this + 2646) = 1;
        *(_BYTE *)(this + 2645) = 0;
      }
    }
  }
  return sub_4285F0((_DWORD *)this, a2, a3);
}
