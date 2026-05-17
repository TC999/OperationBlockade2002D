//----- (0045EE50) --------------------------------------------------------
int __thiscall sub_45EE50(int this, int a2)
{
  int result; // eax
  unsigned int i; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // edx

  *(_BYTE *)(this + 2645) = 0;
  result = *(_DWORD *)(this + 2568);
  if ( result
    && a2 < (unsigned int)((*(_DWORD *)(this + 2572) - result) >> 3)
    && a2 >= 0
    && (*(_DWORD *)(this + 2572) - result) >> 3 )
  {
    *(_DWORD *)(this + 2580) = a2;
    for ( i = 0; ; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 2568) + 8 * i - 8) + 652) + 36) = 0 )
    {
      v5 = *(_DWORD *)(this + 2568);
      if ( !v5 || i >= (*(_DWORD *)(this + 2572) - v5) >> 3 )
        break;
      v6 = *(_DWORD *)(*(_DWORD *)(v5 + 8 * i) + 652);
      v7 = *(_DWORD *)(this + 2580);
      LOBYTE(v7) = i == v7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 24))(v6, v7);
      ++i;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 2568) + 8 * i - 8) + 652) + 32) = 0;
    }
    v8 = this + 2720;
    v9 = 100;
    do
    {
      if ( *(_BYTE *)v8 )
      {
        sub_409A00(dword_520970, *(void **)(v8 + 84));
        *(_DWORD *)(v8 + 84) = 0;
      }
      *(_BYTE *)v8 = 0;
      v8 += 88;
      --v9;
    }
    while ( v9 );
    *(_DWORD *)(this + 2660) = 0;
    *(_DWORD *)(this + 2664) = 0;
    *(_BYTE *)(this + 2668) = 0;
    *(_DWORD *)(this + 2672) = 0;
    memset((void *)(this + 2676), 0, 0x2Cu);
    v10 = *(_DWORD *)(this + 2580);
    *(_BYTE *)(this + 2647) = 0;
    *(_DWORD *)(this + 2648) = 0;
    *(_DWORD *)(this + 2656) = 0;
    *(_DWORD *)(this + 2652) = 0;
    return sub_436A40(
             *(_DWORD *)(dword_520970 + 224),
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 2568) + 8 * v10) + 300) - 1);
  }
  return result;
}
