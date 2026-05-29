//----- (00447750) --------------------------------------------------------
int __thiscall sub_447750(_DWORD *self, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx

  result = self[102];
  if ( *(_DWORD *)(result + 292) == 6 )
  {
    result = self[354];
    if ( a2 == result )
    {
      v5 = self[355] - a4;
      self[355] = v5;
      result = v5 <= 0 ? 0 : v5;
      self[355] = result;
    }
  }
  return result;
}
