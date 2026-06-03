//----- (00481939) --------------------------------------------------------
int __cdecl sub_481939(int a1, int a2)
{
  int result; // eax
  _DWORD *v3; // esi
  bool v4; // zf

  result = a1;
  v3 = *(_DWORD **)(a1 + 392);
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( !v3[2] )
      {
        *(_DWORD *)(*(_DWORD *)a1 + 20) = 4;
        result = (**(int (__cdecl ***)(int))a1)(a1);
      }
      v3[1] = (uintptr_t)sub_4818AD;
    }
    else if ( a2 == 3 )
    {
      if ( !v3[2] )
      {
        *(_DWORD *)(*(_DWORD *)a1 + 20) = 4;
        result = (**(int (__cdecl ***)(int))a1)(a1);
      }
      v3[1] = (uintptr_t)sub_48181D;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)a1 + 20) = 4;
      result = (**(int (__cdecl ***)(int))a1)(a1);
    }
  }
  else if ( *(_BYTE *)(a1 + 74) )
  {
    v4 = v3[3] == 0;
    v3[1] = (uintptr_t)sub_4817B8;
    if ( v4 )
    {
      result = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)(a1 + 4) + 28))(a1, v3[2], 0, v3[4], 1);
      v3[3] = result;
    }
  }
  else
  {
    result = *(_DWORD *)(*(_DWORD *)(a1 + 412) + 4);
    v3[1] = result;
  }
  v3[6] = 0;
  v3[5] = 0;
  return result;
}
