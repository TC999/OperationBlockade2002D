//----- (0046CAC9) --------------------------------------------------------
int __usercall sub_46CAC9@<eax>(int a1@<eax>, _DWORD *a2@<ecx>)
{
  int v3; // edx
  unsigned int v4; // eax
  int result; // eax
  unsigned int *v6; // esi
  int v7; // edi
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx

  if ( !a2[8] )
    return -1;
  v3 = a2[1];
  v4 = *(_DWORD *)(a1 + 4);
  if ( v3 != v4
    && (!v3 && v4 > 2 || v3 == 3 && v4 != 3 || v3 == 2 && v4 != 2 || v3 == 1 && v4 != 1 || v3 == 4 && v4 != 4) )
  {
    return -1;
  }
  result = 0;
  v6 = a2 + 3;
  v7 = a1 - (_DWORD)a2;
  v8 = 5;
  do
  {
    v9 = *(unsigned int *)((char *)v6 + v7);
    v10 = *v6;
    if ( v9 >= *v6 )
    {
      if ( v9 > *v6 )
      {
        if ( v10 )
          result += (v9 - v10) << 16;
        else
          result += 0x1000000;
      }
    }
    else if ( v9 )
    {
      result += v10 - v9;
    }
    else
    {
      result += 256;
    }
    ++v6;
    --v8;
  }
  while ( v8 );
  return result;
}
