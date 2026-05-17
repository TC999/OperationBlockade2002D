//----- (0041D7A0) --------------------------------------------------------
int __thiscall sub_41D7A0(_DWORD *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  _DWORD *v9; // edx
  int v10; // ecx

  v2 = this[69];
  v3 = this[68];
  v4 = v2 - 1;
  this[69] = v4;
  result = v4;
  if ( !v3 && !v4 )
  {
    result = dword_5200E8;
    if ( dword_5200E8 )
    {
      v6 = *(_DWORD *)(dword_5200E8 + 24);
      v7 = (_DWORD *)(dword_5200E8 + 20);
      result = 0;
      if ( v6 > 0 )
      {
        v8 = (_DWORD *)*v7;
        v9 = (_DWORD *)*v7;
        while ( (_DWORD *)*v9 != this )
        {
          ++result;
          ++v9;
          if ( result >= v6 )
            goto LABEL_11;
        }
        v10 = v6 - 1;
        *(_DWORD *)(dword_5200E8 + 24) = v10;
        if ( result != v10 )
        {
          memcpy(&v8[result], &v8[result + 1], 4 * (v10 + 0x3FFFFFFF * result));
          result = v7[1];
          *(_DWORD *)(*v7 + 4 * result) = 0;
        }
      }
    }
LABEL_11:
    if ( this )
    {
      sub_403880((int)this);
      return sub_4885A6(this);
    }
  }
  return result;
}
