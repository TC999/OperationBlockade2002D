//----- (004754C5) --------------------------------------------------------
int __cdecl sub_4754C5(int self, int a2)
{
  unsigned int v3; // ecx
  int v4; // ebx
  void *v5; // eax
  void *v6; // eax
  void *v8; // [esp+10h] [ebp-10h]

  sub_4733C5((float *)self, (float *)a2, 0, 1);
  v3 = *(_DWORD *)(self + 4144) & 0xFFFFFFFE;
  v4 = ((*(_DWORD *)(self + 4152) + 1) & 0xFFFFFFFE) - v3;
  *(_DWORD *)(self + 4208) = (*(_DWORD *)(self + 4152) + 1) & 0xFFFFFFFE;
  *(_DWORD *)self = (uint32)(uintptr_t)&off_49A7D8;
  *(_DWORD *)(self + 4200) = v3;
  *(_DWORD *)(self + 4204) = 0;
  *(_DWORD *)(self + 4216) = 0;
  *(_DWORD *)(self + 4212) = 0;
  *(_DWORD *)(self + 4220) = 0;
  *(_DWORD *)(self + 4224) = v4;
  *(_DWORD *)(self + 4228) = 0;
  *(_DWORD *)(self + 4232) = 1;
  v5 = operator new(16 * v4);
  v8 = v5;
  if ( v5 )
  {
    sub_46C866((int)v5, 16, v4, (int (__cdecl *)(int))sub_46C80E);
    v6 = v8;
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)(self + 4196) = (uint32)(uintptr_t)v6;
  if ( !v6 )
    *(_DWORD *)(self + 4232) = 0;
  if ( *(_DWORD *)(a2 + 4) == 1498831189 )
  {
    *(_DWORD *)(self + 4236) = 8;
    *(_DWORD *)(self + 4240) = 0;
  }
  else
  {
    *(_DWORD *)(self + 4236) = 0;
    *(_DWORD *)(self + 4240) = 8;
  }
  return self;
}
