//----- (00458880) --------------------------------------------------------
char __thiscall sub_458880(int this)
{
  char result; // al
  int v3; // ecx

  result = *(_BYTE *)(this + 404);
  if ( result )
  {
    if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
    {
      if ( dword_5216E8 )
        sub_462520(*(_DWORD *)(*(_DWORD *)(this + 392) + 304), dword_5216E8);
    }
    v3 = *(_DWORD *)(this + 392);
    *(_BYTE *)(this + 404) = 0;
    return sub_45A420(*(_DWORD *)(dword_520970 + 236), v3, 1, 0, 1);
  }
  return result;
}
