//----- (004286C0) --------------------------------------------------------
int __thiscall sub_4286C0(_DWORD *self, int a2)
{
  int result; // eax
  int v3; // edx

  result = self[3];
  v3 = 0;
  if ( result )
  {
    while ( result != a2 )
    {
      v3 = result;
      result = *(_DWORD *)(result + 8);
      if ( !result )
      {
        *(_DWORD *)(a2 + 4) = 0;
        return result;
      }
    }
    if ( v3 )
    {
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(result + 8);
    }
    else
    {
      result = *(_DWORD *)(result + 8);
      self[3] = result;
    }
    *(_DWORD *)(a2 + 4) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  return result;
}
