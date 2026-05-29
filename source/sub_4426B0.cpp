//----- (004426B0) --------------------------------------------------------
int __thiscall sub_4426B0(_DWORD *self, int ArgList, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  int result; // eax
  int v8; // esi
  double v9; // st7
  double v10; // st6
  double v11; // st7
  unsigned int v12; // eax
  long double v13; // st7
  long double v14; // st7
  _DWORD *v15; // ecx
  int v16; // edi
  float *v17; // eax
  int v18; // edi
  char v20; // c0
  int v21; // ebx
  unsigned __int8 v23; // c0
  unsigned __int8 v24; // c3
  float *v25; // eax
  double v26; // st6
  double v27; // st6
  float *v28; // edi
  float *v29; // eax
  double v30; // st7
  int v31; // ecx
  float v32; // ebp
  bool v33; // zf
  signed int v34; // eax
  long double v35; // st7
  int v36; // ecx
  float *v37; // eax
  int v38; // edi
  float v39; // edx
  float v40; // ecx
  double v41; // st7
  int v42; // ebp
  _DWORD *v43; // eax
  float v44; // [esp+0h] [ebp-8Ch]
  float v45; // [esp+14h] [ebp-78h]
  float v46; // [esp+14h] [ebp-78h]
  float v47; // [esp+18h] [ebp-74h]
  float v48; // [esp+18h] [ebp-74h]
  float v49; // [esp+1Ch] [ebp-70h]
  float v50; // [esp+1Ch] [ebp-70h]
  float v51; // [esp+20h] [ebp-6Ch]
  float v52; // [esp+20h] [ebp-6Ch]
  int v53; // [esp+24h] [ebp-68h]
  float v54; // [esp+28h] [ebp-64h]
  float v55; // [esp+28h] [ebp-64h]
  float v56; // [esp+2Ch] [ebp-60h]
  int v57; // [esp+30h] [ebp-5Ch]
  float v58; // [esp+30h] [ebp-5Ch]
  int v59; // [esp+34h] [ebp-58h]
  float v60; // [esp+38h] [ebp-54h] BYREF
  float v61; // [esp+3Ch] [ebp-50h]
  float v62; // [esp+40h] [ebp-4Ch]
  int v63; // [esp+44h] [ebp-48h] BYREF
  float v64; // [esp+48h] [ebp-44h]
  float v65; // [esp+4Ch] [ebp-40h]
  float v66; // [esp+50h] [ebp-3Ch]
  float v67; // [esp+54h] [ebp-38h]
  float v68; // [esp+58h] [ebp-34h]
  float v69; // [esp+5Ch] [ebp-30h] BYREF
  float v70; // [esp+60h] [ebp-2Ch]
  float v71; // [esp+64h] [ebp-28h]
  float v72; // [esp+68h] [ebp-24h]
  float v73; // [esp+6Ch] [ebp-20h]
  int v74; // [esp+70h] [ebp-1Ch]
  float v75; // [esp+74h] [ebp-18h]
  float v76; // [esp+78h] [ebp-14h]
  float v77; // [esp+80h] [ebp-Ch] BYREF
  int v78; // [esp+84h] [ebp-8h]
  int v79; // [esp+88h] [ebp-4h]

  v3 = ArgList;
  sub_4229D0("Adding boats: %d %s", ArgList, *(const char **)(a3 + 4));
  v5 = self[6];
  v6 = 0;
  if ( v5 )
    v53 = (self[7] - v5) >> 2;
  else
    v53 = 0;
  if ( ArgList <= 0 )
    return -1;
  if ( ArgList > 1 )
  {
    do
    {
      sub_4426B0(1, a3);
      --v3;
    }
    while ( v3 > 0 );
    return v53;
  }
  v8 = sub_442F80(a3);
  if ( *(float *)(a3 + 692) == 0.0 )
    v9 = 40000.0;
  else
    v9 = *(float *)(a3 + 692);
  v10 = *(float *)(*(_DWORD *)(v8 + 444) + 4288) * *(float *)(*(_DWORD *)(v8 + 444) + 4284);
  v49 = v10 + v10 + v9;
  v50 = fabs((double)rand() * 0.000030518509) * 10000.0 + v49;
  v11 = *(float *)(*(_DWORD *)(v8 + 444) + 4288) * *(float *)(*(_DWORD *)(v8 + 444) + 4284);
  v12 = *(_DWORD *)(a3 + 292);
  v56 = v11 + v11 + 40000.0;
  if ( v12 < 2 )
  {
    v42 = 0;
    v73 = v50;
    v74 = 0;
    do
    {
      sub_4164A0(*(_DWORD **)(v8 + 444), 0);
      v59 = rand();
      v78 = LODWORD(v50);
      v79 = 0;
      v72 = fabs((double)v59 * 0.000030518509) * 10000.0 - 5000.0;
      v77 = v72;
      if ( sub_416350(*(_DWORD *)(v8 + 444), &v77, 1) )
      {
        v43 = *(_DWORD **)(v8 + 444);
        v69 = 0.0;
        v43 += 30;
        v70 = -1.0;
        *v43 = 0;
        v71 = 0.0;
        v43[1] = -1082130432;
        v43[2] = 0;
        if ( sub_416F80(*(_DWORD **)(v8 + 444), 0) )
          break;
      }
      ++v42;
    }
    while ( v42 < 200 );
    return v53;
  }
  if ( v12 == 4 || v12 == 5 || v12 == 6 )
  {
    v52 = 1.0;
    if ( *(_DWORD *)(v8 + 436) == 1 && *(_BYTE *)(a3 + 740) )
    {
      *(_DWORD *)(v8 + 436) = 2;
      v52 = -1.0;
    }
    v48 = *(float *)(a3 + 696);
    v46 = *(float *)(a3 + 700);
    v74 = 0;
    v73 = v52 * v50;
    v32 = v73;
    do
    {
      if ( v6 > 0 && !(v6 % 50) )
      {
        v48 = v46;
        v46 = v46 + 2000.0;
      }
      sub_4164A0(*(_DWORD **)(v8 + 444), 0);
      v34 = rand() & 0x80000001;
      v33 = v34 == 0;
      if ( v34 < 0 )
        v33 = (((_BYTE)v34 - 1) | 0xFFFFFFFE) == -1;
      v58 = 1.0;
      if ( v33 )
        v58 = -1.0;
      if ( v48 == v46 )
        v35 = v48;
      else
        v35 = fabs((double)rand() * 0.000030518509) * (v46 - v48) + v48;
      v79 = v74;
      v36 = *(_DWORD *)(v8 + 444);
      v78 = LODWORD(v32);
      v72 = v58 * v35;
      v77 = v72;
      if ( sub_416350(v36, &v77, 1) )
      {
        v37 = *(float **)(v8 + 444);
        v69 = 0.0;
        v37 += 30;
        v71 = 0.0;
        v38 = 0;
        v70 = v52 * -1.0;
        v39 = v70;
        *v37 = 0.0;
        v40 = v71;
        v37[1] = v39;
        v37[2] = v40;
        while ( (unsigned __int8)sub_447D80(v8) )
        {
          if ( -v56 > v52 * *(float *)(sub_417140(0) + 4) )
            return v53;
          v55 = *(float *)(sub_417140(1) + 4);
          v41 = *(float *)(sub_417140(0) + 4) - v55;
          if ( v41 < 0.0000099999997 && v41 > -0.0000099999997 )
            return v53;
          if ( ++v38 >= 1000 )
            break;
        }
      }
      ++v6;
    }
    while ( v6 < 400 );
    return v53;
  }
  if ( v12 != 2 && v12 != 3 )
    return v53;
  v57 = 0;
  while ( 2 )
  {
    v47 = *(float *)(a3 + 852);
    v51 = *(float *)(a3 + 856);
    if ( v47 == v51 )
      v13 = v47;
    else
      v13 = fabs((double)rand() * 0.000030518509) * (v51 - v47) + v47;
    v64 = v13;
    *(float *)&v63 = 0.0;
    v65 = 0.0;
    v44 = fabs((double)rand() * 0.000030518509) * 6.2831855;
    sub_401000((float *)&v63, v44);
    sub_46B970(&v69, &v63);
    v45 = *(float *)(a3 + 696);
    v54 = *(float *)(a3 + 700);
    if ( v45 == v54 )
      v14 = v45;
    else
      v14 = fabs((double)rand() * 0.000030518509) * (v54 - v45) + v45;
    v15 = *(_DWORD **)(v8 + 444);
    v77 = 0.0;
    v78 = 1065353216;
    v75 = v69 * v14;
    v79 = 0;
    v76 = v70 * v14;
    v66 = v75 + *(float *)&v63;
    v67 = v64 + v76;
    v68 = v65 + v14 * v71;
    sub_4164A0(v15, 0);
    v16 = 30;
    do
    {
      sub_416350(*(_DWORD *)(v8 + 444), &v63, 0);
      --v16;
    }
    while ( v16 );
    v17 = (float *)(*(_DWORD *)(v8 + 444) + 120);
    v18 = 0;
    *v17 = v69;
    v17[1] = v70;
    v17[2] = v71;
    while ( 1 )
    {
      sub_4196F0(*(_DWORD *)(v8 + 444), &v69, 0.0, 0.0, 0, 0);
      if ( v18 > 0 )
      {
        sub_417140(0);
        if ( v20 )
          break;
      }
      if ( ++v18 >= 1000 )
        goto LABEL_42;
    }
    v21 = 0;
    while ( 1 )
    {
      sub_4196F0(*(_DWORD *)(v8 + 444), &v77, 0.0, 0.0, 0, 0);
      sub_417140(0);
      sub_417140(1);
      if ( !(v23 | v24) )
      {
        sub_4164A0(*(_DWORD **)(v8 + 444), *(_DWORD *)(*(_DWORD *)(v8 + 444) + 4132) - 1);
        v25 = (float *)sub_417140(0);
        v26 = v25[1] * -1.0;
        v74 = 0;
        v72 = v26 - 0.0;
        v27 = *v25 * -1.0;
        v62 = 0.0;
        v60 = v72;
        v73 = 0.0 - v27;
        v61 = v73;
        sub_46B970(&v60, &v60);
        v28 = (float *)sub_417140(0);
        v29 = (float *)sub_417140(1);
        if ( v28[1] * *v29 - v29[1] * *v28 <= 0.0 )
          v30 = -1.0;
        else
          v30 = 1.0;
        v31 = *(_DWORD *)(v8 + 444);
        v60 = v60 * v30;
        v61 = v61 * v30;
        v62 = v62 * v30;
        sub_4196F0(v31, &v60, 0.0, 0.0, 0, 0);
      }
      if ( *(float *)(sub_417140(0) + 4) > (double)v50 )
        break;
      if ( ++v21 >= 1000 )
        goto LABEL_42;
    }
    if ( sub_419BC0(*(_DWORD **)(v8 + 444), 1) )
      break;
LABEL_42:
    if ( ++v57 < 200 )
      continue;
    break;
  }
  result = v53;
  *(float *)(v8 + 508) = (double)(*(_DWORD *)(*(_DWORD *)(v8 + 444) + 4132) - 30)
                       * *(float *)(*(_DWORD *)(v8 + 444) + 4288);
  return result;
}
