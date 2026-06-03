//----- (00406CB0) --------------------------------------------------------
int __cdecl sub_406CB0(int self, int a2)
{
  float *v3; // edi
  int v4; // eax
  float v6; // [esp-4h] [ebp-10h]
  char v7; // [esp+0h] [ebp-Ch]

  v6 = *(float *)(a2 + 40);
  v3 = (float *)(*(_DWORD *)(self + 24) + 96 * LODWORD(v6));
  v4 = sub_406F00((float *)self, LODWORD(v6));
  BYTEn(v4, 0) = *(_BYTE *)(self + 40);
  v7 = 0;
  return sub_406110(*(_DWORD **)(self + 28), self, *(_DWORD *)(a2 + 40), v3, v4, v7);
}
