//----- (00475B69) --------------------------------------------------------
int __cdecl sub_475B69(int self, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  void *v6; // eax
  void *v7; // eax
  void *v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp+8h]

  sub_4733C5((float *)self, (float *)a2, 0, 1);
  *(_DWORD *)self = &off_49A818;
  *(_DWORD *)(self + 4248) = 0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    *(_DWORD *)(self + 4252) = 0;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) != 2 )
    {
      *(_DWORD *)(self + 4252) = 3;
      goto LABEL_7;
    }
    *(_DWORD *)(self + 4252) = 1;
  }
  *(_DWORD *)(self + 4248) = 1;
LABEL_7:
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    *(_DWORD *)(self + 4256) = 0;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    *(_DWORD *)(self + 4256) = 1;
LABEL_12:
    *(_DWORD *)(self + 4248) = 1;
    goto LABEL_13;
  }
  *(_DWORD *)(self + 4256) = 3;
LABEL_13:
  v3 = (*(_DWORD *)(self + 4152) + 3) & 0xFFFFFFFC;
  v4 = *(_DWORD *)(self + 4144) & 0xFFFFFFFC;
  *(_DWORD *)(self + 4220) = v3;
  *(_DWORD *)(self + 4244) = 1;
  *(_DWORD *)(self + 4212) = v4;
  *(_DWORD *)(self + 4216) = 0;
  *(_DWORD *)(self + 4228) = 0;
  *(_DWORD *)(self + 4224) = 0;
  *(_DWORD *)(self + 4232) = 0;
  *(_DWORD *)(self + 4260) = 0;
  *(_DWORD *)(self + 4236) = v3 - v4;
  *(_DWORD *)(self + 4240) = 0;
  v5 = (_DWORD *)(self + 4196);
  v11 = 4;
  do
  {
    v10 = *(_DWORD *)(self + 4236);
    v6 = operator new(16 * v10);
    v9 = v6;
    if ( v6 )
    {
      sub_46C866((int)v6, 16, v10, (int (__cdecl *)(int))sub_46C80E);
      v7 = v9;
    }
    else
    {
      v7 = 0;
    }
    *v5 = v7;
    if ( !v7 )
      *(_DWORD *)(self + 4244) = 0;
    ++v5;
    --v11;
  }
  while ( v11 );
  return self;
}
