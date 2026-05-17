//----- (0043E9B0) --------------------------------------------------------
int __thiscall sub_43E9B0(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  const void *v5; // esi
  void *v6; // edi
  int result; // eax

  v2 = 0;
  if ( this[29] - 1 <= 0 )
  {
    result = this[30] - 1;
    this[30] = result;
  }
  else
  {
    v3 = 0;
    do
    {
      v4 = this[31];
      ++v2;
      v5 = (const void *)(v3 + v4 + 72);
      v6 = (void *)(v3 + v4);
      v3 += 72;
      qmemcpy(v6, v5, 0x48u);
    }
    while ( v2 < this[29] - 1 );
    result = this[30] - 1;
    this[30] = result;
  }
  return result;
}
