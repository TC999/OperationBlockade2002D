//----- (0041D700) --------------------------------------------------------
int __thiscall sub_41D700(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // edx
  int v7; // ecx

  result = this[68] - 1;
  this[68] = result;
  if ( !result )
  {
    result = this[69];
    if ( !result )
    {
      result = dword_5200E8;
      if ( dword_5200E8 )
      {
        v3 = *(_DWORD *)(dword_5200E8 + 24);
        v4 = (_DWORD *)(dword_5200E8 + 20);
        result = 0;
        if ( v3 > 0 )
        {
          v5 = (_DWORD *)*v4;
          v6 = (_DWORD *)*v4;
          while ( (_DWORD *)*v6 != this )
          {
            ++result;
            ++v6;
            if ( result >= v3 )
              goto LABEL_11;
          }
          v7 = v3 - 1;
          *(_DWORD *)(dword_5200E8 + 24) = v7;
          if ( result != v7 )
          {
            memcpy(&v5[result], &v5[result + 1], 4 * (v7 + 0x3FFFFFFF * result));
            result = v4[1];
            *(_DWORD *)(*v4 + 4 * result) = 0;
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
  }
  return result;
}
