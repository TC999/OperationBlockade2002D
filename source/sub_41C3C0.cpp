//----- (0041C3C0) --------------------------------------------------------
void __cdecl sub_41C3C0(int self, float a2, float a3, int a4)
{
  double v5; // st7
  long double v6; // st7
  bool v7; // c0
  double v8; // st6
  float v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+18h] [ebp+8h]

  v13 = sub_41C2F0((float *)self, a2);
  v15 = sub_41C2F0((float *)self, a3);
  if ( *(_BYTE *)(self + 8) )
  {
    v9 = v13 - v15;
    v12 = sub_41C2F0((float *)self, v9);
    v10 = v15 - v13;
    v14 = sub_41C2F0((float *)self, v10);
    if ( v12 >= (double)v14 )
      v5 = v14;
    else
      v5 = v12;
    if ( *(float *)&a4 < v5 )
    {
      v6 = *(float *)&a4;
      v7 = v12 < (double)v14;
    }
    else
    {
      if ( v12 >= (double)v14 )
        v6 = v14;
      else
        v6 = v12;
      v7 = v12 < (double)v14;
    }
  }
  else
  {
    v6 = fabs(v15 - v13);
    if ( *(float *)&a4 < v6 )
      v6 = *(float *)&a4;
    v7 = v15 < (double)v13;
  }
  if ( v7 )
    v8 = 1.0;
  else
    v8 = -1.0;
  v11 = v6 * v8 + v15;
  sub_41C2A0(v11);
}
