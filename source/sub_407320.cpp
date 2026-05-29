//----- (00407320) --------------------------------------------------------
double __thiscall sub_407320(_DWORD *self, int a2)
{
  float *v2; // eax

  v2 = (float *)sub_407190(self, a2, 0);
  if ( v2 && *((_BYTE *)v2 + 70) )
    return v2[18];
  else
    return 0.0;
}
