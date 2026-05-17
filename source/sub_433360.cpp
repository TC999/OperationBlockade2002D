//----- (00433360) --------------------------------------------------------
int __thiscall sub_433360(int this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ecx

  if ( !(_BYTE)a2 )
  {
    v3 = *(_DWORD *)(this + 468);
    if ( v3 )
    {
      if ( *(int *)(v3 + 4132) > 0 )
      {
        sub_415910();
        *(_DWORD *)(this + 468) = 0;
      }
    }
  }
  result = *(_DWORD *)(this + 2300);
  if ( result )
    *(_BYTE *)(result + 32) = a2;
  v5 = *(_DWORD *)(this + 432);
  if ( v5 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, a2);
  *(_BYTE *)(this + 16) = a2;
  return result;
}
