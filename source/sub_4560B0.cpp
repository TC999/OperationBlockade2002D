//----- (004560B0) --------------------------------------------------------
int __thiscall sub_4560B0(int this, int a2, _DWORD *a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  long double v13; // st7
  int v14; // eax
  _DWORD *v15; // eax
  int result; // eax
  float v17; // [esp+34h] [ebp+Ch]
  float v18; // [esp+38h] [ebp+10h]

  sub_401270((_DWORD *)this);
  Iostream_init::Iostream_init((Iostream_init *)(this + 492));
  *(_DWORD *)(this + 396) = a4;
  *(_DWORD *)(this + 400) = a5;
  *(_DWORD *)(this + 392) = a2;
  *(_DWORD *)this = &off_499B10;
  *(_BYTE *)(this + 404) = 1;
  *(_BYTE *)(this + 420) = 0;
  *(_DWORD *)(this + 428) = *a3;
  *(_DWORD *)(this + 432) = a3[1];
  *(_DWORD *)(this + 436) = a3[2];
  *(float *)(this + 436) = sub_468BE0(*(_DWORD *)(this + 428), *(_DWORD *)(this + 432), 0);
  *(_DWORD *)(this + 440) = 0;
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 456) = 0;
  *(_DWORD *)(this + 444) = 1065353216;
  v6 = *(_DWORD *)(this + 392) + 372;
  *(_DWORD *)(this + 448) = 0;
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(v6 + 8) - v7) >> 3;
  else
    v8 = 0;
  v9 = rand() % v8;
  v10 = *(_DWORD *)(this + 392);
  v11 = 16 * *(_DWORD *)(this + 456);
  *(_DWORD *)(this + 460) = v9;
  v12 = *(_DWORD *)(*(_DWORD *)(v11 + v10 + 376) + 8 * v9 + 4);
  *(_DWORD *)(this + 468) = 0;
  *(_DWORD *)(this + 464) = v12;
  *(_DWORD *)(this + 484) = 0;
  v17 = *(float *)(v10 + 324);
  v18 = *(float *)(v10 + 328);
  if ( v17 == v18 )
    v13 = v17;
  else
    v13 = fabs((double)rand() * 0.000030518509) * (v18 - v17) + v17;
  v14 = *(_DWORD *)(this + 392);
  *(float *)(this + 1332) = v13;
  *(float *)(this + 1336) = *(float *)(v14 + 328) - *(float *)(v14 + 324) + v13;
  *(_DWORD *)(this + 1340) = *(_DWORD *)(v14 + 312);
  v15 = sub_409960((_DWORD *)dword_520970, this);
  *(_DWORD *)(this + 1376) = v15;
  v15[3] = 5;
  *(_DWORD *)(*(_DWORD *)(this + 1376) + 48) = *(_DWORD *)(*(_DWORD *)(this + 392) + 316);
  *(_DWORD *)(*(_DWORD *)(this + 1376) + 52) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 1376) + 56) = -1;
  *(_BYTE *)(*(_DWORD *)(this + 1376) + 60) = 1;
  result = this;
  *(_BYTE *)(*(_DWORD *)(this + 1376) + 44) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 1376) + 28) = 1;
  return result;
}
