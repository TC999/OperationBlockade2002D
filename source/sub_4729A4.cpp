//----- (004729A4) --------------------------------------------------------
int __cdecl sub_4729A4(int self, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned int v6; // eax
  void *v7; // ecx
  void *v8; // ecx
  _DWORD *i; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v4 = a3;
  v11 = 0;
  do
  {
    switch ( v11 )
    {
      case 0:
        v6 = sub_472972((int *)self, (int)a2, a3);
        goto LABEL_16;
      case 1:
        v6 = sub_471E3C((_DWORD *)self, a2, a3);
        goto LABEL_16;
      case 2:
        v6 = sub_47264E((int *)self, (_DWORD*)a2, a3);
        goto LABEL_16;
      case 3:
        v6 = sub_471771((_DWORD *)self, (int)a2, a3);
        goto LABEL_16;
      case 4:
        v6 = sub_472138((_DWORD *)self, (int)a2, a3);
        goto LABEL_16;
      case 5:
        v6 = sub_4719C6((int *)self, a2, a3);
        goto LABEL_16;
      case 6:
        v6 = sub_471009((int *)self, (int)a2, a3);
LABEL_16:
        v4 = v6;
        break;
    }
    if ( v4 >= 0 )
      break;
    if ( *(_DWORD *)(self + 4) && *(_DWORD *)(self + 32) )
      sub_4885A6(*(LPVOID *)(self + 4));
    if ( *(_DWORD *)(self + 28) && *(_DWORD *)(self + 36) )
      sub_4885A6(*(LPVOID *)(self + 28));
    v7 = *(void **)(self + 40);
    if ( v7 )
      sub_470FEA(v7, 1);
    v8 = *(void **)(self + 44);
    if ( v8 )
      sub_470FEA(v8, 1);
    ++v11;
    *(_DWORD *)(self + 4) = 0;
    *(_DWORD *)(self + 28) = 0;
    *(_DWORD *)(self + 32) = 0;
    *(_DWORD *)(self + 36) = 0;
    *(_DWORD *)(self + 40) = 0;
    *(_DWORD *)(self + 44) = 0;
  }
  while ( v11 < 7 );
  if ( v11 == 7 )
  {
    sub_46D8FD(0, (char *)"Unsupported file format");
    return -2005529767;
  }
  else
  {
    if ( a4 )
    {
      *a4 = 0;
      a4[1] = 0;
      a4[2] = 0;
      a4[3] = 0;
      a4[4] = 0;
      *a4 = *(_DWORD *)(self + 20);
      a4[1] = *(_DWORD *)(self + 24);
      a4[2] = 1;
      a4[3] = 1;
      a4[4] = *(_DWORD *)self;
      for ( i = (_DWORD *)(self + 40); *i; i = (_DWORD *)(*i + 40) )
        ++a4[3];
    }
    return 0;
  }
}
