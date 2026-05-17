//----- (00416F80) --------------------------------------------------------
char __thiscall sub_416F80(_DWORD *this, char a2)
{
  int v4; // edi
  bool v5; // zf
  int v6; // edi
  int v7; // ecx
  unsigned __int8 (__cdecl *v8)(_DWORD); // eax
  _DWORD *i; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14; // edi
  _DWORD *v15; // ecx
  _DWORD *v16; // esi
  int v17; // [esp+14h] [ebp+4h]

  v4 = a2 != 0 ? 10 : 1000;
  v5 = a2 == 0;
  v17 = v4;
  if ( !v5 && (int)this[1033] < 6 )
  {
    sub_4164A0(this, 0);
    v6 = 6;
    do
    {
      sub_416350((int)this, this + 6, 0);
      --v6;
    }
    while ( v6 );
    v4 = v17;
    this[30] = this[9];
    this[31] = this[10];
    this[32] = this[11];
  }
  v7 = this[1033];
  if ( v7 >= this[1069] )
    return 1;
  while ( --v4 > 0 )
  {
    v8 = (unsigned __int8 (__cdecl *)(_DWORD))this[2];
    if ( v8 )
    {
      if ( !v8(this[1]) )
      {
        for ( i = &this[5 * this[1033] + 32]; ; i = &this[5 * this[1033] + 32] )
        {
          ++*i;
          if ( (int)this[1033] <= 8 )
          {
            v10 = sub_417160(this);
            v11 = 3 * this[1070];
          }
          else
          {
            v10 = sub_417160(this);
            v11 = this[1070];
          }
          if ( v10 <= v11 )
            break;
          v12 = this[1033];
          if ( v12 <= 6 )
          {
            if ( a2 )
            {
              sub_4164A0(this, 0);
              v14 = 6;
              do
              {
                sub_416350((int)this, this + 6, 0);
                --v14;
              }
              while ( v14 );
              v15 = this + 9;
              v16 = this + 30;
              *v16 = *v15;
              v16[1] = v15[1];
              v16[2] = v15[2];
            }
            return 0;
          }
          sub_4164A0(this, v12 - 1);
        }
      }
    }
    else
    {
      this[1033] = v7 + 1;
      LOBYTE(this[5 * v7 + 33]) = 0;
      sub_417260(this);
    }
    v7 = this[1033];
    if ( v7 >= this[1069] )
      return 1;
  }
  return 0;
}
