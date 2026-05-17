//----- (00447750) --------------------------------------------------------
int __thiscall sub_447750(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx

  result = this[102];
  if ( *(_DWORD *)(result + 292) == 6 )
  {
    result = this[354];
    if ( a2 == result )
    {
      v5 = this[355] - a4;
      this[355] = v5;
      result = v5 <= 0 ? 0 : v5;
      this[355] = result;
    }
  }
  return result;
}
