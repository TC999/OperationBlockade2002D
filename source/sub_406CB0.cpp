//----- (00406CB0) --------------------------------------------------------
int __thiscall sub_406CB0(int this, int a2)
{
  float *v3; // edi
  int v4; // eax
  float v6; // [esp-4h] [ebp-10h]
  char v7; // [esp+0h] [ebp-Ch]

  v6 = *(float *)(a2 + 40);
  v3 = (float *)(*(_DWORD *)(this + 24) + 96 * LODWORD(v6));
  v4 = sub_406F00(v6);
  LOBYTE(v4) = *(_BYTE *)(this + 40);
  return sub_406110(*(_DWORD **)(this + 28), this, *(_DWORD *)(a2 + 40), v3, v4, v7);
}
