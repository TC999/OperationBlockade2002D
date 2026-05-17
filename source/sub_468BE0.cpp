//----- (00468BE0) --------------------------------------------------------
double __thiscall sub_468BE0(int *this, int a2, int a3, int *a4)
{
  float *v6; // ecx
  int *v7; // esi
  int v8; // eax
  double v9; // st7
  int v10; // eax
  float v12; // [esp+14h] [ebp+8h]

  v6 = (float *)this[11];
  if ( v6 )
    v12 = sub_4510D0(v6, *(float *)&a2, *(float *)&a3);
  else
    v12 = -3.4028235e38;
  if ( a4 )
    *a4 = 2;
  if ( this[6] )
  {
    v7 = &dword_4AE740;
    if ( dword_4AE740 != -1 )
    {
      do
      {
        v8 = v7[2];
        if ( v8 >= 0 )
        {
          v9 = sub_4081A0(this[6], v8, a2, a3);
          if ( v9 > v12 )
          {
            v12 = v9;
            if ( a4 )
              *a4 = *v7;
          }
        }
        v10 = v7[3];
        v7 += 3;
      }
      while ( v10 != -1 );
    }
  }
  if ( v12 != -3.4028235e38 )
    return v12;
  if ( a4 )
    *a4 = -1;
  return 0.0;
}
