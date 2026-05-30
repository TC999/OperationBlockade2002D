//----- (00492D7F) --------------------------------------------------------
// AUTO-FIX: Stub for internal CRT function __strgtold12
int __cdecl sub_492D7F(int a1, int a2)
{
  *(double*)a1 = strtod((const char*)a2, NULL);
  return 0;
}
