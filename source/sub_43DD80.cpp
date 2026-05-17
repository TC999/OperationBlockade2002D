//----- (0043DD80) --------------------------------------------------------
int __thiscall sub_43DD80(LPVOID **this)
{
  int result; // eax
  int v3; // ecx
  LPVOID *v4; // edi

  sub_463070(*(_DWORD *)(dword_520970 + 280));
  sub_4630D0(*(_DWORD *)(dword_520970 + 280));
  result = sub_463150(*(_DWORD *)(dword_520970 + 280));
  v3 = (int)this[11];
  if ( v3 )
  {
    result = sub_41CF50(v3);
    v4 = this[11];
    if ( v4 )
    {
      sub_41C700(this[11]);
      result = sub_4885A6(v4);
    }
    this[11] = 0;
  }
  return result;
}
