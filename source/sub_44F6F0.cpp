//----- (0044F6F0) --------------------------------------------------------
extern char aLoading[];
extern "C" { __time32_t __cdecl _time32(__time32_t *); }

char __cdecl sub_44F6F0(int self)
{
  char result; // al
  __time32_t v3; // eax
  int v4; // eax
  int v5; // eax
  double v6; // st7
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  int v10; // eax
  double v11; // st6
  int v12; // ecx
  int v13; // eax
  LPVOID *v14; // eax

  *(_DWORD *)(self + 172) = 0;
  *(_DWORD *)(self + 176) = 0;
  *(_DWORD *)(self + 184) = 0;
  *(_DWORD *)(self + 188) = 0;
  *(_DWORD *)(self + 192) = 0;
  *(_BYTE *)(self + 196) = 0;
  *(_DWORD *)(self + 200) = 0;
  *(_DWORD *)(self + 204) = 0;
  *(_DWORD *)(self + 208) = 0;
  *(_DWORD *)(self + 212) = 0;
  *(_DWORD *)(self + 216) = 0;
  *(_DWORD *)(self + 220) = 0;
  *(_DWORD *)(self + 224) = 0;
  *(_DWORD *)(self + 228) = 0;
  *(_DWORD *)(self + 232) = 0;
  *(_DWORD *)(self + 236) = 0;
  *(_DWORD *)(self + 240) = 0;
  *(_DWORD *)(self + 244) = 0;
  *(_DWORD *)(self + 248) = 0;
  *(_DWORD *)(self + 252) = 0;
  *(_DWORD *)(self + 256) = 0;
  *(_DWORD *)(self + 260) = 0;
  *(_DWORD *)(self + 264) = 0;
  *(_DWORD *)(self + 268) = 0;
  *(_DWORD *)(self + 272) = 0;
  *(_DWORD *)(self + 276) = 0;
  *(_DWORD *)(self + 280) = 0;
  *(_DWORD *)(self + 284) = 0;
  *(_DWORD *)(self + 288) = 0;
  *(_DWORD *)(self + 292) = 0;
  *(_BYTE *)(self + 296) = 0;
  *(_DWORD *)(self + 312) = 0;
  *(_DWORD *)(self + 308) = 0;
  *(_DWORD *)(self + 304) = 0;
  *(_DWORD *)(self + 300) = 0;
  *(_DWORD *)(self + 316) = 0;
  result = sub_408D20(self);
  if ( result )
  {
    v3 = _time32(0);
    srand(v3);
    sub_421810(*(_DWORD *)(self + 132), (const char *)off_4A70F0, (int)&unk_4A70F8, 0);
    sub_421810(*(_DWORD *)(self + 132), (const char *)off_4A7B78, (int)&unk_4A7B80, (int)&unk_4A8600);
    sub_421810(*(_DWORD *)(self + 132), (const char *)off_4A90B8, (int)&unk_4A90C0, (int)&unk_4A9B40);
    v4 = (int)sub_409AD0((int*)self, 1, 128);
    *(_DWORD *)(self + 300) = v4;
    sub_421300(v4, 0xFFu, 0xFFu, 0xFFu, 255);
    sub_421370(*(_DWORD **)(self + 300), 0, 0, 0, 255);
    *(_BYTE *)(*(_DWORD *)(self + 300) + 35) = 1;
    v5 = *(_DWORD *)(self + 300);
    v6 = (double)(unsigned int)dword_5209F4;
    *(_DWORD *)(v5 + 16) = 1097859072;
    *(_BYTE *)(v5 + 32) = 1;
    *(float *)(v5 + 12) = v6 * 0.5;
    *(_DWORD *)(*(_DWORD *)(self + 300) + 20) = 1148813312;
    v7 = *(_DWORD *)(self + 300);
    *(_BYTE *)(v7 + 33) = 1;
    sub_421540((void **)v7);
    v8 = (int)sub_409AD0((int*)self, 1, 128);
    *(_DWORD *)(self + 304) = v8;
    sub_421300(v8, 0xFFu, 0xFFu, 0xFFu, 255);
    sub_421370(*(_DWORD **)(self + 304), 0, 0, 0, 255);
    *(_BYTE *)(*(_DWORD *)(self + 304) + 35) = 1;
    v9 = (double)(unsigned int)dword_5209D8 * 0.5;
    v10 = *(_DWORD *)(self + 304);
    v11 = (double)(unsigned int)dword_5209F4;
    *(_BYTE *)(v10 + 32) = 1;
    *(float *)(v10 + 12) = v11 * 0.5;
    *(float *)(v10 + 16) = v9;
    *(_DWORD *)(*(_DWORD *)(self + 304) + 20) = 1148813312;
    v12 = *(_DWORD *)(self + 304);
    *(_BYTE *)(v12 + 33) = 1;
    sub_421540((void **)v12);
    v13 = (int)sub_409AD0((int*)self, 2, 128);
    *(_DWORD *)(self + 308) = v13;
    sub_421300(v13, 0xFFu, 0xFFu, 0xFFu, 178);
    *(_BYTE *)(self + 168) = 1;
    v14 = (LPVOID *)sub_450BF0((_DWORD*)self, 1, 4.0f);
    sub_421110(v14, aLoading);
    return 1;
  }
  return result;
}
