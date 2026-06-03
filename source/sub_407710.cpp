#include "common.h"

//----- (00407710) --------------------------------------------------------
char __cdecl sub_407710(float *self, int a2, int a3, int a4, int a5, int a6, int a7, int *a8, int a9)
{
  float *v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // ebp
  int *v13; // esi
  int v14; // ebx
  int v15; // eax
  float v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // edi
  int v20; // ebp
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // dx
  int v23; // eax
  char v25; // [esp+31h] [ebp-C9h]
  int v26; // [esp+32h] [ebp-C8h]
  int v27; // [esp+36h] [ebp-C4h]
  int v28; // [esp+3Ah] [ebp-C0h] BYREF
  int v29; // [esp+3Eh] [ebp-BCh]
  int v30; // [esp+42h] [ebp-B8h]
  int v31; // [esp+46h] [ebp-B4h] BYREF
  int *v32; // [esp+4Ah] [ebp-B0h]
  int v33; // [esp+4Eh] [ebp-ACh]
  int v34; // [esp+52h] [ebp-A8h]
  int v35; // [esp+56h] [ebp-A4h] BYREF
  int v36; // [esp+5Ah] [ebp-A0h]
  int v37; // [esp+5Eh] [ebp-9Ch]
  int v38; // [esp+62h] [ebp-98h] BYREF
  int v39; // [esp+66h] [ebp-94h]
  int v40; // [esp+6Ah] [ebp-90h]
  int v41; // [esp+6Eh] [ebp-8Ch] BYREF
  int v42; // [esp+72h] [ebp-88h]
  int v43; // [esp+76h] [ebp-84h]
  _DWORD v44[3]; // [esp+7Ah] [ebp-80h] BYREF
  _DWORD v45[3]; // [esp+86h] [ebp-74h] BYREF
  float *v46; // [esp+92h] [ebp-68h]
  int v47[3]; // [esp+96h] [ebp-64h] BYREF
  int v48[3]; // [esp+A2h] [ebp-58h] BYREF
  int v49[3]; // [esp+AEh] [ebp-4Ch] BYREF
  float v50[16]; // [esp+BAh] [ebp-40h] BYREF

  v9 = self;
  v48[0] = a2;
  v49[0] = a5;
  v10 = *((_DWORD *)self + 5);
  v48[1] = a3;
  v48[2] = a4;
  v11 = 0;
  v12 = 0;
  v46 = self;
  v49[1] = a6;
  v49[2] = a7;
  v29 = 0;
  if ( v10 <= 0 )
    return 0;
  v27 = 0;
  v33 = 0;
  while ( 1 )
  {
    v13 = (int *)(*((_DWORD *)v9 + 6) + v11);
    v14 = v27 + *(_DWORD *)(*((_DWORD *)v9 + 7) + 4);
    v34 = v14;
    if ( v13 )
    {
      v15 = v13[23];
      if ( v15 )
        break;
    }
    if ( *(_BYTE *)(v14 + 80) )
      goto LABEL_9;
LABEL_20:
    v23 = *((_DWORD *)v9 + 5);
    ++v12;
    v11 = v33 + 96;
    v29 = v12;
    v33 += 96;
    v27 += 172;
    if ( v12 >= v23 )
      return 0;
  }
  if ( !*(_BYTE *)(v14 + 80) || !*(_BYTE *)(v15 + 77) )
    goto LABEL_20;
LABEL_9:
  sub_406F00(v9, v12);
  v16 = *((float *)v13 + 3);
  v47[0] = *v13;
  v47[1] = v13[1];
  v47[2] = v13[2];
  if ( !(unsigned __int8)sub_40C6F0((float *)v48, (float *)v49, (float *)v47) )
    goto LABEL_20;
  qmemcpy(v50, v13 + 4, sizeof(v50));
  v17 = 0;
  sub_46B9FD(v50, (float *)0, v50);
  v44[0] = a2;
  v44[1] = a3;
  v44[2] = a4;
  v45[0] = a5;
  v45[1] = a6;
  v45[2] = a7;
  sub_46C5C5((float *)v44, (float *)v44, v50);
  sub_46C5C5((float *)v45, (float *)v45, v50);
  v25 = 0;
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(**(_DWORD **)(v14 + 44) + 44))(
    *(_DWORD *)(v14 + 44),
    0,
    0,
    &v28,
    0);
  v30 = v14 + 84;
  v18 = *(_DWORD *)(v14 + 36);
  v32 = 0;
  (*(void (__stdcall **)(int, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)v18 + 44))(v18, 0, 0, &v31, 0);
  v19 = v28;
  v20 = v31;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v26 = 0;
  do
  {
    if ( v26 >= (int)*(_DWORD *)(v14 + 48) )
      break;
    v21 = *(_WORD *)(v17 + v19 + 2);
    v22 = *(_WORD *)(v17 + v19 + 4);
    v32 = (int *)(v20 + *(_DWORD *)(v30 + 84) * *(unsigned __int16 *)(v17 + v19));
    v35 = *v32;
    v36 = v32[1];
    v37 = v32[2];
    v32 = (int *)(v20 + *(_DWORD *)(v30 + 84) * v21);
    v41 = *v32;
    v42 = v32[1];
    v43 = v32[2];
    v32 = (int *)(v20 + *(_DWORD *)(v30 + 84) * v22);
    v38 = *v32;
    v39 = v32[1];
    v40 = v32[2];
    if ( (unsigned __int8)sub_40C910((float *)v44, (float *)v45, (intptr_t)&v35, (intptr_t)&v41, (intptr_t)&v38, (float *)a9) )
    {
      v19 = v28;
      v20 = v31;
      v25 = 1;
    }
    else
    {
      v19 = v28;
      v20 = v31;
      v25 = 0;
    }
    v14 = v34;
    v17 += 6;
    ++v26;
  }
  while ( !v25 );
  *(float *)dword_520A58 = (float)((double)*(int *)(v14 + 48) + *(float *)dword_520A58);
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 44) + 48))(*(_DWORD *)(v14 + 44));
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 36) + 48))(*(_DWORD *)(v14 + 36));
  if ( !v25 )
  {
    v9 = v46;
    v12 = v29;
    goto LABEL_20;
  }
  *a8 = v29;
  return 1;
}
