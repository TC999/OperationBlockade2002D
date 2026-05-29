//----- (00450FB0) --------------------------------------------------------
void *__thiscall sub_450FB0(void *self, int a2, int a3, int a4)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  float *v9; // ebp
  int v10; // ebx
  double v11; // st7
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]
  int i; // [esp+1Ch] [ebp+4h]

  *((_DWORD *)self + 3) = a2;
  *(_DWORD *)self = operator new(4 * a2 * a2);
  sub_408680(
    a3,
    a4,
    (float *)self + 4,
    (float *)self + 5,
    (float *)self + 6,
    (float *)self + 7,
    (float *)self + 8,
    (float *)self + 9);
  v6 = (double)a2 - 1.0;
  if ( v6 == 0.0 )
    v7 = 1.0;
  else
    v7 = (*((float *)self + 5) - *((float *)self + 4)) / v6;
  *((float *)self + 1) = v7;
  if ( v6 == 0.0 )
    v8 = 1.0;
  else
    v8 = (*((float *)self + 7) - *((float *)self + 6)) / v6;
  *((float *)self + 2) = v8;
  v9 = *(float **)self;
  for ( i = 0; i < a2; ++i )
  {
    v10 = 0;
    v13 = 0;
    *(float *)&v15 = (double)i * *((float *)self + 2) + *((float *)self + 6);
    do
    {
      *(float *)&v14 = (double)v13 * *((float *)self + 1) + *((float *)self + 4);
      v11 = sub_4081A0(a3, a4, v14, v15);
      if ( v11 < -1.0 )
        v11 = -1.0;
      *v9++ = v11;
      v13 = ++v10;
    }
    while ( v10 < a2 );
  }
  return self;
}
