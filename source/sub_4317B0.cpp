//----- (004317B0) --------------------------------------------------------
int __cdecl sub_4317B0(_DWORD *self, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = self[107];
  if ( *(_DWORD *)(result + 896) && !self[567] && a2 == 1 )
  {
    memset(v8, 0, sizeof(v8));
    result = sub_44E040(*(_DWORD *)(result + 896), (int)(self + 335), self[108], **(float **)(result + 636), (int)v8);
  }
  v4 = self[568];
  self[567] = a2;
  if ( v4 && a2 )
  {
    result = sub_41D9A0(v4);
    self[568] = 0;
  }
  v5 = self[569];
  if ( v5 && self[567] )
  {
    result = sub_41D9A0(v5);
    self[569] = 0;
  }
  v6 = self[570];
  if ( v6 && self[567] == 2 )
  {
    result = sub_41D9A0(v6);
    self[570] = 0;
  }
  if ( *(_DWORD *)(self[107] + 292) == 3 )
  {
    v7 = self[356];
    if ( v7 )
    {
      if ( self[567] == 2 )
      {
        result = sub_41D9A0(v7);
        self[356] = 0;
      }
    }
  }
  return result;
}
