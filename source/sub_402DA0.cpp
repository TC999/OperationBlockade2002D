//----- (00402DA0) --------------------------------------------------------
void __cdecl sub_402DA0(int self, float a2)
{
  int v3; // ebp
  double v4; // st7
  double v5; // st7
  int v6; // edx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // [esp+Ch] [ebp-18h] BYREF
  int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+14h] [ebp-10h]
  _DWORD v26[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(self + 76) )
  {
    v3 = **(_DWORD **)(self + 72);
    if ( *(_BYTE *)v3 )
    {
      if ( *(float *)(self + 68) <= 0.0 )
      {
        v11 = *(_DWORD *)(self + 104);
        if ( v11 && *(_BYTE *)(v11 + 53) )
        {
          v12 = *(_DWORD *)(self + 76);
          v13 = 0;
          if ( v12 > 0 )
          {
            v14 = *(_DWORD **)(self + 72);
            v15 = v14;
            while ( *v15 != v3 )
            {
              ++v13;
              ++v15;
              if ( v13 >= v12 )
                goto LABEL_23;
            }
            v16 = v12 - 1;
            *(_DWORD *)(self + 76) = v16;
            if ( v13 != v16 )
            {
              memcpy(&v14[v13], &v14[v13 + 1], 4 * (v16 + 0x3FFFFFFF * v13));
              *(_DWORD *)(*(_DWORD *)(self + 72) + 4 * *(_DWORD *)(self + 76)) = 0;
            }
          }
LABEL_23:
          v17 = *(_DWORD *)(self + 96);
          v18 = *(_DWORD *)(self + 92) + 1;
          *(_DWORD *)(self + 92) = v18;
          if ( v18 > v17 )
          {
            v19 = v17 + 8;
            *(_DWORD *)(self + 96) = v19;
            v20 = sub_488DD7(*(LPVOID *)(self + 88), 4 * v19);
            if ( v20 )
            {
              v21 = *(_DWORD *)(self + 92);
              v22 = *(_DWORD *)(self + 96) - v21;
              *(_DWORD *)(self + 88) = v20;
              memset((void *)(v20 + 4 * v21), 0, 4 * v22);
            }
          }
          *(_DWORD *)(*(_DWORD *)(self + 88) + 4 * *(_DWORD *)(self + 92) - 4) = v3;
          *(_DWORD *)(self + 104) = 0;
        }
      }
      else
      {
        v5 = *(float *)(self + 68) - a2;
        *(float *)(self + 68) = v5;
        if ( v5 < 0.0 )
        {
          *(_DWORD *)(self + 68) = 0;
          v6 = *(_DWORD *)(v3 + 16);
          if ( v6 == -1 )
          {
            v7 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 68);
            v6 = rand() % v7;
          }
          v8 = sub_41E2D0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 12) + 64) + 4 * v6), 1, 0);
          *(_DWORD *)(self + 104) = v8;
          if ( v8 )
          {
            v23 = 0;
            v24 = 0;
            v25 = 0;
            memset(v26, 0, sizeof(v26));
            if ( sub_408F30(dword_520970) )
            {
              v9 = (_DWORD *)sub_408F30(dword_520970);
              v10 = v9[8];
              v9 += 8;
              v23 = v10;
              v24 = v9[1];
              v25 = v9[2];
            }
            sub_41D960(&v23, v26);
            sub_41D840(*(_DWORD *)(self + 104));
          }
          else
          {
            *(_DWORD *)(self + 68) = 1056964608;
          }
        }
      }
    }
    else
    {
      v4 = *(float *)(v3 + 4);
      *(_BYTE *)v3 = 1;
      *(float *)(self + 68) = v4;
      if ( v4 <= 0.0 )
        *(_DWORD *)(self + 68) = 981668463;
    }
  }
}
