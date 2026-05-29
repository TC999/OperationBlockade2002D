//----- (00419910) --------------------------------------------------------
char __thiscall sub_419910(int self, float a2, float a3, float a4, char a5, char a6)
{
  char v7; // bl
  int v8; // ecx
  float v9; // ecx
  long double v10; // st7
  double v11; // st7
  char result; // al
  int v13; // [esp+8h] [ebp-18h] BYREF
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]
  float v19; // [esp+2Ch] [ebp+Ch]

  v7 = LOBYTE(a4);
  v8 = self + 20 * *(_DWORD *)(self + 4132) + 116;
  v16 = *(float *)v8;
  v17 = *(float *)(v8 + 4);
  v9 = *(float *)(v8 + 8);
  v13 = *(int *)(self + 120);
  v18 = v9;
  v14 = *(float *)(self + 124);
  v15 = *(float *)(self + 128);
  if ( LOBYTE(a4) )
    v19 = a2 * *(float *)(self + 4292);
  else
    v19 = a2;
  sub_401000((float *)&v13, v19);
  v10 = a3;
  if ( v7 )
    v10 = v10 * *(float *)(self + 4296);
  v15 = tan(v10);
  sub_46B970(&v13, &v13);
  v11 = *(float *)(self + 4288) * *(float *)(self + 4284);
  *(float *)&v13 = *(float *)&v13 * v11;
  v14 = v14 * v11;
  *(float *)&v13 = v16 + *(float *)&v13;
  v14 = v14 + v17;
  v15 = v18 + v11 * v15;
  if ( !a6 )
    return sub_416350(self, &v13, a5) != 0;
  result = sub_419C40(&v13);
  if ( result )
    return sub_416350(self, &v13, a5) != 0;
  return result;
}
