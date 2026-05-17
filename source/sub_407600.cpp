//----- (00407600) --------------------------------------------------------
int __thiscall sub_407600(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _BYTE *v6; // edi

  v6 = sub_407190(this, a2, 1);
  v6[2] = 1;
  sub_46BE02(&unk_4F5AB8, a3, a4, a5);
  sub_46B97C(v6 + 4, v6 + 4, &unk_4F5AB8);
  return sub_407120(this, a2);
}
