//----- (00406A50) --------------------------------------------------------
int __thiscall sub_406A50(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx

  result = this[5];
  v3 = 0;
  if ( result )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(result + 580);
      if ( result == a2 )
        break;
      v3 = result;
      result = *(_DWORD *)(result + 580);
      if ( !v4 )
        return result;
    }
    if ( v3 )
      *(_DWORD *)(v3 + 580) = v4;
    else
      this[5] = v4;
  }
  return result;
}
