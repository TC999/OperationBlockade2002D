//----- (00407250) --------------------------------------------------------
int __thiscall sub_407250(_DWORD *self)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi

  v2 = 0;
  if ( (int)self[5] > 0 )
  {
    v3 = 0;
    do
    {
      v4 = v3 + self[6];
      if ( *(_DWORD *)(v4 + 92) )
      {
        sub_4885A6(*(LPVOID *)(v4 + 92));
        *(_DWORD *)(v4 + 92) = 0;
      }
      ++v2;
      v3 += 96;
    }
    while ( v2 < self[5] );
  }
  return sub_407120(self, 0);
}
