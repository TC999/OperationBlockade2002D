//----- (00407A90) --------------------------------------------------------
BOOL __userpurge sub_407A90(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        _DWORD *a11,
        int a12,
        int a13)
{
  int v13; // edi
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  int *v18; // esi
  int v19; // ebx
  char v20; // cl
  int v21; // ebx
  float v22; // edx
  int v23; // eax
  int v24; // edi
  int v25; // ebp
  int v26; // esi
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // dx
  bool v29; // cc
  int v33; // [esp+36h] [ebp-E4h]
  int v34; // [esp+3Ah] [ebp-E0h]
  int v35; // [esp+3Eh] [ebp-DCh] BYREF
  int v36; // [esp+42h] [ebp-D8h]
  int v37; // [esp+46h] [ebp-D4h]
  int v38; // [esp+4Eh] [ebp-CCh]
  int v39; // [esp+52h] [ebp-C8h] BYREF
  int *v40; // [esp+56h] [ebp-C4h]
  int v41; // [esp+5Ah] [ebp-C0h] BYREF
  int v42; // [esp+5Eh] [ebp-BCh]
  int v43; // [esp+62h] [ebp-B8h]
  int v44; // [esp+66h] [ebp-B4h]
  int v45; // [esp+6Ah] [ebp-B0h]
  int v46; // [esp+6Eh] [ebp-ACh]
  int v47; // [esp+72h] [ebp-A8h]
  int v48; // [esp+76h] [ebp-A4h]
  int v49; // [esp+82h] [ebp-98h] BYREF
  int v50; // [esp+86h] [ebp-94h]
  int v51; // [esp+8Ah] [ebp-90h]
  int v52; // [esp+8Eh] [ebp-8Ch] BYREF
  int v53; // [esp+92h] [ebp-88h]
  int v54; // [esp+96h] [ebp-84h]
  int v55; // [esp+9Ah] [ebp-80h] BYREF
  int v56; // [esp+9Eh] [ebp-7Ch] BYREF
  int v57; // [esp+A2h] [ebp-78h]
  int v58; // [esp+A6h] [ebp-74h] BYREF
  int v59[3]; // [esp+B6h] [ebp-64h] BYREF
  int v60[3]; // [esp+C2h] [ebp-58h] BYREF
  int v61[3]; // [esp+CEh] [ebp-4Ch] BYREF
  _BYTE v62[64]; // [esp+DAh] [ebp-40h] BYREF

  v13 = a1;
  v60[2] = a6;
  v60[0] = a4;
  v60[1] = a5;
  v59[2] = a9;
  v14 = *(_DWORD *)(a1 + 20);
  v59[0] = a7;
  v59[1] = a8;
  v15 = -1;
  v16 = 0;
  v33 = v13;
  v42 = -1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v45 = 2139095039;
  v34 = 0;
  if ( v14 <= 0 )
    return v15 != -1;
  v17 = 0;
  v36 = 0;
  v44 = 0;
  do
  {
    v18 = (int *)(*(_DWORD *)(v13 + 24) + v17);
    v19 = *(_DWORD *)(*(_DWORD *)(v13 + 28) + 4);
    v20 = *(_BYTE *)(v19 + v36 + 80);
    v21 = v36 + v19;
    v43 = v21;
    if ( v20 )
    {
      sub_406F00((float *)v13, v16);
      v22 = *((float *)v18 + 3);
      v61[0] = *v18;
      v61[1] = v18[1];
      v61[2] = v18[2];
      if ( (unsigned __int8)sub_40C6F0((int)v60, (int)v59, (int)v61, v22) )
      {
        qmemcpy(v62, v18 + 4, sizeof(v62));
        sub_46B9FD(v62, 0, v62);
        v39 = a4;
        v40 = (int *)a5;
        v41 = a6;
        v56 = a7;
        v57 = a8;
        v58 = a9;
        sub_46C5C5(&v39, &v39, v62);
        sub_46C5C5(&v56, &v56, v62);
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD, int, int))(**(_DWORD **)(v21 + 44) + 44))(
          *(_DWORD *)(v21 + 44),
          0,
          0,
          &v35,
          0,
          a3,
          a2);
        v23 = *(_DWORD *)(v21 + 36);
        v38 = v21 + 84;
        v40 = 0;
        (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)v23 + 44))(v23, 0, 0, &v39, 0);
        v24 = v37;
        v34 = 0;
        v25 = v39;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v49 = 0;
        v50 = 0;
        v51 = 0;
        v55 = 0;
        v56 = 0;
        v57 = 0;
        v26 = 0;
        while ( 1 )
        {
          if ( v34 >= *(_DWORD *)(v21 + 48) )
          {
LABEL_13:
            *(float *)dword_520A58 = (double)*(int *)(v21 + 48) + *(float *)dword_520A58;
            a2 = *(_DWORD *)(v21 + 44);
            (*(void (**)(void))(*(_DWORD *)a2 + 48))();
            a3 = *(_DWORD *)(v21 + 36);
            (*(void (**)(void))(*(_DWORD *)a3 + 48))();
            v13 = v33;
            goto LABEL_14;
          }
          v27 = *(_WORD *)(v26 + v24 + 2);
          v28 = *(_WORD *)(v26 + v24 + 4);
          v40 = (int *)(v25 + *(_DWORD *)(v38 + 84) * *(unsigned __int16 *)(v26 + v24));
          v52 = *v40;
          v53 = v40[1];
          v54 = v40[2];
          v40 = (int *)(v25 + *(_DWORD *)(v38 + 84) * v27);
          v49 = *v40;
          v50 = v40[1];
          v51 = v40[2];
          v40 = (int *)(v25 + *(_DWORD *)(v38 + 84) * v28);
          v55 = *v40;
          v56 = v40[1];
          v57 = v40[2];
          if ( HIBYTE(v33) )
            goto LABEL_11;
          if ( (unsigned __int8)sub_40C910(&v41, &v58, &v52, &v49, &v55, a13) )
            break;
          v24 = v37;
          v25 = v39;
          HIBYTE(v33) = 0;
LABEL_12:
          v21 = v45;
          v26 += 6;
          ++v34;
          if ( HIBYTE(v33) )
            goto LABEL_13;
        }
        v24 = v37;
        v25 = v39;
LABEL_11:
        HIBYTE(v33) = 1;
        goto LABEL_12;
      }
    }
LABEL_14:
    v16 = v34 + 1;
    v17 = v44 + 96;
    v29 = ++v34 < *(_DWORD *)(v13 + 20);
    v44 += 96;
    v36 += 172;
  }
  while ( v29 );
  v15 = v42;
  if ( v42 != -1 )
  {
    *a10 = v42;
    *a11 = v46;
    a11[1] = v47;
    a11[2] = v48;
  }
  return v15 != -1;
}
