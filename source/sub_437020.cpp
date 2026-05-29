//----- (00437020) --------------------------------------------------------
void __thiscall sub_437020(float *self, float a2, float a3)
{
  int v3; // edx
  int v4; // esi
  double v5; // st7
  int v6; // esi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-4h]
  int v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+14h] [ebp+4h]

  v3 = -1;
  v4 = 0;
  v11 = 0;
  while ( 1 )
  {
    v5 = (double)v11 * 45.0;
    if ( v5 - 22.5 < a2 && v5 + 22.5 >= a2 )
      break;
    v11 = ++v4;
    if ( v4 >= 4 )
      goto LABEL_7;
  }
  v3 = v4;
LABEL_7:
  v6 = 5;
  v12 = 5;
  while ( v3 == -1 )
  {
    v7 = (double)v12 * 45.0 - 360.0;
    if ( v7 - 22.5 < a2 && v7 + 22.5 >= a2 )
    {
      v3 = v6;
      break;
    }
    v12 = ++v6;
    if ( v6 >= 8 )
      break;
  }
  if ( a2 > -157.5 && a2 < 157.5 )
  {
    if ( v3 <= -1 )
      return;
  }
  else
  {
    v3 = 4;
  }
  v8 = a3;
  if ( a3 < 0.25 )
  {
    if ( v8 <= 0.0099999998 )
      v8 = 0.0099999998;
  }
  else
  {
    v8 = 0.25;
  }
  v13 = v8 * 4.0;
  if ( self[v3 + 132] <= (double)v13 )
    v9 = v13;
  else
    v9 = self[v3 + 132];
  self[v3 + 132] = v9;
  v10 = v13 + 0.2;
  sub_413240(LODWORD(v13), LODWORD(v10), 255, 0);
}
