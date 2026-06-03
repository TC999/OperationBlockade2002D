//----- (0040EA70) --------------------------------------------------------
unsigned int *__cdecl sub_40EA70(unsigned int *a1)
{
  unsigned int *result; // eax
  _BYTE *v2; // ecx
  unsigned int *v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax

  result = a1;
  if ( a1 )
  {
    result = a1 - 1;
    *((_BYTE *)a1 - 4) &= ~1u;
    --dword_4F5CA0;
    ++dword_4F5C94;
    dword_4F5C9C -= *(a1 - 1) & 0xFFFFFFFC;
    dword_4F5C98 += *(a1 - 1) & 0xFFFFFFFC;
    if ( (*(_BYTE *)(a1 - 1) & 2) == 0 )
    {
      v2 = (_BYTE *)((char *)result + (*result & 0xFFFFFFFC));
      if ( (*v2 & 1) == 0 )
      {
        if ( (*v2 & 2) != 0 )
          *(_BYTE *)result = *((_BYTE *)a1 - 4) | 2;
        *result = *result & 3 | ((*(_DWORD *)v2 & 0xFFFFFFFC) + (*result & 0xFFFFFFFC));
        --dword_4F5C94;
      }
    }
    v3 = (unsigned int *)dword_4F5C8C;
    if ( (unsigned int *)dword_4F5C8C != result )
    {
      v4 = *(_DWORD *)dword_4F5C8C;
      if ( (char *)dword_4F5C8C + (*(_DWORD *)dword_4F5C8C & 0xFFFFFFFC) != (char *)result )
      {
        do
        {
          v3 = (unsigned int *)((char *)v3 + (v4 & 0xFFFFFFFC));
          v4 = *v3;
        }
        while ( (unsigned int *)((char *)v3 + (*v3 & 0xFFFFFFFC)) != result );
      }
      if ( (*(_BYTE *)v3 & 1) == 0 )
      {
        if ( (*(_BYTE *)result & 2) != 0 )
          *(_BYTE *)v3 |= 2u;
        v5 = *result;
        *(_BYTE *)&v5 = v5 & 0xFC;
        *v3 = *v3 & 3 | ((*v3 & 0xFFFFFFFC) + v5);
        result = v3;
        --dword_4F5C94;
      }
    }
    dword_4F5C88 = (int)(uintptr_t)result;
  }
  return result;
}
