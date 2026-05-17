//----- (0046C53F) --------------------------------------------------------
float *__stdcall sub_46C53F(float *a1, float *a2)
{
  float *v3; // esi
  float *v4; // esi
  float v6; // [esp+4h] [ebp-1Ch]
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF
  float v8; // [esp+28h] [ebp+8h]

  if ( a1 )
  {
    v3 = a2;
    if ( a2 )
    {
      v8 = sub_46C29E(a2);
      if ( sub_46B940(v8, 1.0) )
      {
        if ( a1 == a2 )
          return a1;
      }
      else
      {
        if ( v8 <= 9.9999994e-11 )
        {
          *a1 = 0.0;
          a1[1] = 0.0;
          a1[2] = 0.0;
          return a1;
        }
        v6 = sqrt(v8);
        v3 = sub_416320(a2, v7, v6);
      }
      *a1 = *v3;
      v4 = v3 + 1;
      a1[1] = *v4;
      a1[2] = v4[1];
      return a1;
    }
  }
  return 0;
}
