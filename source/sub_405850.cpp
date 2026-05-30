//----- (00405850) --------------------------------------------------------
char __cdecl sub_405850(int self, int Buffer)
{
  int v2; // edi
  double v4; // st7
  double v5; // st7
  char result; // al
  double v7; // st7
  float v8; // [esp+8h] [ebp-2Ch] BYREF
  float v9; // [esp+Ch] [ebp-28h] BYREF
  float v10; // [esp+10h] [ebp-24h] BYREF
  float v11; // [esp+14h] [ebp-20h] BYREF
  float v12; // [esp+18h] [ebp-1Ch] BYREF
  float v13; // [esp+1Ch] [ebp-18h] BYREF
  int v14; // [esp+20h] [ebp-14h] BYREF
  float v15; // [esp+24h] [ebp-10h]
  float v16; // [esp+28h] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-8h]
  float v18; // [esp+30h] [ebp-4h]

  v2 = Buffer;
  if ( !sub_4057E0((FILE **)self, (void *)(Buffer + 4))
    || !sub_4057E0((FILE **)self, &Buffer)
    || !sub_4057E0((FILE **)self, &v8)
    || !sub_4057E0((FILE **)self, &v9)
    || !sub_4057E0((FILE **)self, &v10)
    || !sub_4057E0((FILE **)self, &v11)
    || !sub_4057E0((FILE **)self, &v12)
    || !sub_4057E0((FILE **)self, &v13)
    || !sub_4057E0((FILE **)self, &v14) )
  {
    return 0;
  }
  v16 = v8;
  v17 = v9;
  v15 = -v10;
  v4 = v11;
  *(_DWORD *)(v2 + 8) = Buffer;
  *(float *)(v2 + 12) = v16;
  v16 = -v4;
  v5 = v12;
  *(float *)(v2 + 16) = v17;
  result = 1;
  v17 = -v5;
  v7 = v13;
  *(float *)(v2 + 20) = v15;
  v18 = v7;
  *(float *)(v2 + 24) = v16;
  *(float *)(v2 + 28) = v17;
  *(float *)(v2 + 32) = v18;
  *(_DWORD *)(v2 + 36) = v14;
  *(_DWORD *)v2 = *(_DWORD *)(self + 52);
  return result;
}
