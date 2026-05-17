//----- (00451820) --------------------------------------------------------
int __thiscall sub_451820(_DWORD *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  int *v5; // ecx

  v2 = 0;
  result = this[3];
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(int **)(this[4] + v4 + 260);
      if ( v5 )
      {
        sub_422230(v5);
        *(_DWORD *)(this[4] + v4 + 260) = 0;
      }
      result = this[3];
      ++v2;
      v4 += 264;
    }
    while ( v2 < result );
  }
  return result;
}
