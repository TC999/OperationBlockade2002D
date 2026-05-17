//----- (00421DE0) --------------------------------------------------------
double __stdcall sub_421DE0(int a1, char a2, char a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 268);
  if ( v3 )
  {
    while ( *(_BYTE *)v3 )
    {
      if ( *(_BYTE *)v3 == a2 && *(_BYTE *)(v3 + 1) == a3 )
        return (double)*(int *)(*(_DWORD *)(a1 + 260) + 28) * *(float *)(v3 + 4);
      v3 += 8;
      if ( !v3 )
        return 0.0;
    }
  }
  return 0.0;
}
