//----- (0040AF60) --------------------------------------------------------
float *__thiscall sub_40AF60(const char *this, char *ArgList, float *a3)
{
  float *result; // eax
  const char *v5; // esi
  char v6; // al
  char v7; // al
  double v8; // st7

  result = (float *)sub_40B6E0(ArgList, 1);
  v5 = (const char *)result;
  if ( result )
  {
    v6 = *(_BYTE *)result;
    v7 = *v5 >= 48 && v6 <= 57 || v6 == 45 || v6 == 43 || v6 == 46;
    sub_40A120(v7, "%s = %s, float expected, see %s", ArgList, v5, this + 16);
    v8 = atof(v5);
    result = a3;
    *a3 = v8;
  }
  return result;
}
