//----- (004665E0) --------------------------------------------------------
char __cdecl sub_4665E0(int self, int *a2, float a3, float a4, char a5, int a6)
{
  int v7; // edi
  int i; // ebp
  char result; // al
  float v10; // [esp+0h] [ebp-44h]
  int v11; // [esp+14h] [ebp-30h] BYREF
  int v12; // [esp+18h] [ebp-2Ch] BYREF
  int v13; // [esp+1Ch] [ebp-28h]
  int v14; // [esp+20h] [ebp-24h]
  _WORD v15[4]; // [esp+24h] [ebp-20h] BYREF
  int v16; // [esp+2Ch] [ebp-18h]
  int v17; // [esp+30h] [ebp-14h]
  int v18; // [esp+34h] [ebp-10h]
  int v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  char v21; // [esp+40h] [ebp-4h]

  v12 = 0;
  v13 = 0;
  v14 = 0;
  v7 = 0;
  for ( i = 1116; i < 1152; i += 12 )
  {
    result = sub_407F00(*(_DWORD *)(self + 416), *(_DWORD *)(*(_DWORD *)(self + 412) + i), a2, a3, &v12, (float *)&v11);
    if ( result )
    {
      if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v15[3] = *(_WORD *)(self + 392);
        v18 = v13;
        v20 = *(float *)&v11 * a4;
        v17 = v12;
        v16 = v7;
        v19 = v14;
        v21 = 1;
        result = sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x803, v15, 29, 2, 10000);
      }
      else
      {
        v10 = *(float *)&v11 * a4;
        result = sub_4666E0(v7, &v12, LODWORD(v10), a5);
      }
    }
    ++v7;
  }
  return result;
}
