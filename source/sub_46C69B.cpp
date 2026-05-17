//----- (0046C69B) --------------------------------------------------------
float *__stdcall sub_46C69B(float *a1, float a2, float a3, float a4)
{
  int v5[4]; // [esp+Ch] [ebp-10h] BYREF

  if ( !a1 )
    return 0;
  sub_46C2C4((float *)v5, a2, a3, a4);
  sub_46C107(a1, (float *)v5);
  return a1;
}
