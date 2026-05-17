//----- (00465FB0) --------------------------------------------------------
char __thiscall sub_465FB0(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int i; // ecx

  v1 = this[6];
  if ( v1 )
    v2 = (this[7] - v1) >> 2;
  else
    v2 = 0;
  v3 = 0;
  if ( v2 <= 0 )
    return 1;
  for ( i = this[6]; !*(_BYTE *)(*(_DWORD *)i + 396); i += 4 )
  {
    if ( ++v3 >= v2 )
      return 1;
  }
  return 0;
}
