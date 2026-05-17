//----- (004621B0) --------------------------------------------------------
void __thiscall sub_4621B0(int *this)
{
  int v1; // ebx
  int *v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // edx
  int *v6; // eax
  int v7; // esi
  _DWORD *v8; // edx
  int v9; // eax
  int v10; // [esp+8h] [ebp-4h]

  v1 = this[130];
  v10 = 0;
  if ( v1 > 0 )
  {
    v2 = this + 223;
    v3 = v1;
    do
    {
      v4 = *v2;
      v5 = 0;
      v6 = dword_499B68;
      do
      {
        if ( v4 == *v6 )
          *((_BYTE *)&v10 + v5) = 1;
        ++v6;
        ++v5;
      }
      while ( (int)v6 < (int)&off_499B78 );
      v2 += 88;
      --v3;
    }
    while ( v3 );
  }
  v7 = 0;
  if ( v1 > 0 )
  {
    v8 = this + 223;
    do
    {
      if ( !*v8 )
      {
        v9 = 0;
        while ( *((_BYTE *)&v10 + v9) )
        {
          if ( ++v9 >= 4 )
            goto LABEL_16;
        }
        *((_BYTE *)&v10 + v9) = 1;
        *v8 = dword_499B68[v9];
      }
LABEL_16:
      ++v7;
      v8 += 88;
    }
    while ( v7 < this[130] );
  }
}
