//----- (004075B0) --------------------------------------------------------
int __cdecl sub_4075B0(_DWORD *self, int a2, float a3)
{
  _BYTE *v4; // edi

  v4 = sub_407190(self, a2, 1);
  v4[2] = 1;
  sub_46BF69((int)&unk_4F5AB8, a3);
  sub_46B97C(v4 + 4, v4 + 4, &unk_4F5AB8);
  return sub_407120(self, a2);
}
