//----- (004081A0) --------------------------------------------------------
double __thiscall sub_4081A0(int self, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ebp
  char v6; // dl
  int v7; // ebx
  float *v8; // esi
  double v10; // st7
  double v11; // st6
  float v12; // ecx
  bool v13; // al
  double v14; // st7
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // esi
  unsigned __int16 v18; // dx
  int v19; // ecx
  int v20; // [esp+18h] [ebp-114h]
  float v21; // [esp+2Ch] [ebp-100h]
  int v22; // [esp+2Ch] [ebp-100h]
  float v23; // [esp+30h] [ebp-FCh]
  float v24; // [esp+30h] [ebp-FCh]
  int v25; // [esp+34h] [ebp-F8h]
  _DWORD *v26; // [esp+38h] [ebp-F4h] BYREF
  int *v27; // [esp+3Ch] [ebp-F0h]
  int v28; // [esp+40h] [ebp-ECh] BYREF
  float v29; // [esp+44h] [ebp-E8h]
  float v30; // [esp+48h] [ebp-E4h]
  _DWORD v31[2]; // [esp+4Ch] [ebp-E0h] BYREF
  float v32; // [esp+54h] [ebp-D8h]
  int v33; // [esp+58h] [ebp-D4h]
  int v34; // [esp+5Ch] [ebp-D0h]
  float v35; // [esp+60h] [ebp-CCh]
  int v36; // [esp+64h] [ebp-C8h] BYREF
  int v37; // [esp+68h] [ebp-C4h]
  int v38; // [esp+6Ch] [ebp-C0h]
  int v39; // [esp+70h] [ebp-BCh] BYREF
  int v40; // [esp+74h] [ebp-B8h]
  int v41; // [esp+78h] [ebp-B4h]
  int v42; // [esp+7Ch] [ebp-B0h]
  int v43; // [esp+80h] [ebp-ACh]
  float v44; // [esp+84h] [ebp-A8h]
  int v45; // [esp+88h] [ebp-A4h] BYREF
  int v46; // [esp+8Ch] [ebp-A0h]
  int v47; // [esp+90h] [ebp-9Ch]
  int v48; // [esp+94h] [ebp-98h]
  int v49; // [esp+98h] [ebp-94h] BYREF
  const void *v50; // [esp+9Ch] [ebp-90h]
  _DWORD v51[3]; // [esp+A0h] [ebp-8Ch] BYREF
  _BYTE v52[64]; // [esp+ACh] [ebp-80h] BYREF
  _BYTE v53[64]; // [esp+ECh] [ebp-40h] BYREF

  v33 = a3;
  v42 = a3;
  v34 = a4;
  v43 = a4;
  v4 = *(_DWORD *)(self + 28);
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0.0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v5 = *(_DWORD *)(v4 + 4) + 172 * a2;
  v6 = *(_BYTE *)(v5 + 80);
  v7 = 0;
  v8 = (float *)(*(_DWORD *)(self + 24) + 96 * a2);
  v35 = 0.0;
  v44 = 0.0;
  v48 = v5;
  if ( !v6 )
    return -3.4028235e38;
  sub_406F00((float *)self, a2);
  v10 = v8[2];
  v11 = *v8 - *(float *)&a3;
  v12 = v8[2];
  v29 = v8[1];
  v30 = v12;
  v23 = v11;
  v21 = v29 - *(float *)&a4;
  v13 = v8[3] * v8[3] >= (v12 - v10) * (v12 - v10) + v23 * v23 + v21 * v21;
  v14 = v8[3] * 1.1;
  v24 = -3.4028235e38;
  v35 = v14 + v8[2];
  v44 = v8[2] - v14;
  if ( v13 )
  {
    v50 = v8 + 4;
    qmemcpy(v52, v8 + 4, sizeof(v52));
    sub_46B9FD(v52, 0, v52);
    v28 = v33;
    v29 = *(float *)&v34;
    v30 = v35;
    v51[0] = v42;
    v51[1] = v43;
    *(float *)&v51[2] = v44;
    sub_46C5C5(&v28, &v28, v52);
    sub_46C5C5(v51, v51, v52);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(**(_DWORD **)(v5 + 44) + 44))(
      *(_DWORD *)(v5 + 44),
      0,
      0,
      &v49,
      0);
    v25 = v5 + 84;
    v15 = *(_DWORD *)(v5 + 36);
    v27 = 0;
    (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD **, _DWORD))(*(_DWORD *)v15 + 44))(v15, 0, 0, &v26, 0);
    v16 = *(_DWORD *)(v5 + 48);
    v17 = v26;
    v27 = v26;
    v22 = 0;
    if ( v16 > 0 )
    {
      while ( 1 )
      {
        v18 = *(_WORD *)(v7 + v49 + 4);
        v19 = *(unsigned __int16 *)(v7 + v49 + 2);
        v27 = (_DWORD *)((char *)v17 + *(_DWORD *)(v25 + 84) * *(unsigned __int16 *)(v7 + v49));
        v39 = *v27;
        v40 = v27[1];
        v41 = v27[2];
        v27 = (_DWORD *)((char *)v17 + *(_DWORD *)(v25 + 84) * v19);
        v36 = *v27;
        v37 = v27[1];
        v38 = v27[2];
        v27 = (_DWORD *)((char *)v17 + *(_DWORD *)(v25 + 84) * v18);
        v45 = *v27;
        v46 = v27[1];
        v47 = v27[2];
        if ( (unsigned __int8)sub_40C910(&v28, v51, &v39, &v36, &v45, v31) )
        {
          qmemcpy(v53, v50, sizeof(v53));
          sub_46C5C5(v31, v31, v53);
          if ( v24 <= (double)v32 )
            v24 = v32;
        }
        v5 = v48;
        v7 += 6;
        if ( ++v22 >= *(_DWORD *)(v48 + 48) )
          break;
        v17 = v26;
      }
    }
    *(float *)dword_520A58 = (double)v22 + *(float *)dword_520A58;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v5 + 44) + 48))(*(_DWORD *)(v5 + 44));
    (*(void (__stdcall **)(int))(**(_DWORD **)(v5 + 36) + 48))(v20);
  }
  return v24;
}
