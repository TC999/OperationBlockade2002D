//----- (00484647) --------------------------------------------------------
int __cdecl sub_484647(_DWORD *a1)
{
  _DWORD *v1; // eax
  int result; // eax

  v1 = (_DWORD *)(*(int (__cdecl **)(_DWORD *, int, int))a1[1])(a1, 1, 88);
  a1[105] = (uint32)(size_t)v1;
  v1[17] = 0;
  v1[13] = 0;
  *v1 = (uint32)(size_t)sub_48455F;
  v1[2] = 0;
  v1[3] = (uint32)(size_t)sub_484630;
  if ( (int)a1[25] > 4 )
  {
    *(_DWORD *)(*a1 + 20) = 54;
    *(_DWORD *)(*a1 + 24) = 4;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  if ( (int)a1[21] > 256 )
  {
    *(_DWORD *)(*a1 + 20) = 56;
    *(_DWORD *)(*a1 + 24) = 256;
    (*(void (__cdecl **)(_DWORD *))*a1)(a1);
  }
  sub_483D81(a1);
  result = sub_483EAE(a1);
  if ( a1[19] == 2 )
    return sub_484521(a1);
  return result;
}
