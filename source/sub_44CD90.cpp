//----- (0044CD90) --------------------------------------------------------
int __thiscall sub_44CD90(_DWORD *this, float a2)
{
  int result; // eax

  result = this[7496];
  if ( result )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 100) == 6 )
      return sub_44DAD0(*(_DWORD *)(result + 812), a2, 0.0, 0);
  }
  return result;
}
