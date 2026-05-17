//----- (004317B0) --------------------------------------------------------
int __thiscall sub_4317B0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = this[107];
  if ( *(_DWORD *)(result + 896) && !this[567] && a2 == 1 )
  {
    memset(v8, 0, sizeof(v8));
    result = sub_44E040(*(_DWORD *)(result + 896), (int)(this + 335), this[108], **(float **)(result + 636), (int)v8);
  }
  v4 = this[568];
  this[567] = a2;
  if ( v4 && a2 )
  {
    result = sub_41D9A0(v4);
    this[568] = 0;
  }
  v5 = this[569];
  if ( v5 && this[567] )
  {
    result = sub_41D9A0(v5);
    this[569] = 0;
  }
  v6 = this[570];
  if ( v6 && this[567] == 2 )
  {
    result = sub_41D9A0(v6);
    this[570] = 0;
  }
  if ( *(_DWORD *)(this[107] + 292) == 3 )
  {
    v7 = this[356];
    if ( v7 )
    {
      if ( this[567] == 2 )
      {
        result = sub_41D9A0(v7);
        this[356] = 0;
      }
    }
  }
  return result;
}
