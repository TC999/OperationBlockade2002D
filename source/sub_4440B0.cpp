//----- (004440B0) --------------------------------------------------------
char __thiscall sub_4440B0(int self, char a2)
{
  int v3; // eax
  int v4; // ecx
  char v5; // al
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v12; // [esp+8h] [ebp+4h]

  sub_4229D0("Boat %d %s destroyed", *(_DWORD *)(self + 1456), *(const char **)(*(_DWORD *)(self + 408) + 4));
  v3 = *(_DWORD *)(self + 444);
  if ( !v3 )
    return v3;
  if ( *(_BYTE *)(self + 392) )
    sub_444030((_DWORD *)self, 1);
  sub_4477F0(1);
  v4 = *(_DWORD *)(self + 444);
  *(float *)(self + 428) = (1.0 - *(float *)(v4 + 16)) * *(float *)(v4 + 4288) + *(float *)(v4 + 4288) * 4.0;
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    if ( !a2 )
    {
LABEL_9:
      v5 = 0;
      goto LABEL_11;
    }
  }
  else if ( *(_DWORD *)(self + 436) != 6 || *(float *)(v4 + 4288) * 6.0 <= *(float *)(self + 508) )
  {
    goto LABEL_9;
  }
  v5 = 1;
LABEL_11:
  *(_DWORD *)(self + 436) = 7;
  if ( v5 )
  {
    sub_4164A0((_DWORD *)v4, 6);
    v6 = *(_DWORD *)(self + 444);
    v12 = *(_DWORD *)(v6 + 4284);
    *(_DWORD *)(v6 + 4284) = *(_DWORD *)(*(_DWORD *)(self + 408) + 848);
    v7 = (float *)(*(_DWORD *)(self + 444) + 120);
    *v7 = *v7 * -1.0;
    v7[1] = v7[1] * -1.0;
    v7[2] = v7[2] * -1.0;
    v8 = (float *)(*(_DWORD *)(self + 444) + 36);
    *v8 = *v8 * -1.0;
    v8[1] = v8[1] * -1.0;
    v8[2] = v8[2] * -1.0;
    *(_BYTE *)(self + 448) = 1;
    if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
    {
      v9 = 3;
      do
      {
        sub_419910(*(_DWORD *)(self + 444), 0.0, 0.0, COERCE_FLOAT(1), 0, 0);
        --v9;
      }
      while ( v9 );
    }
    *(_DWORD *)(*(_DWORD *)(self + 444) + 4284) = v12;
    v10 = *(_DWORD *)(self + 444);
    *(float *)(self + 428) = *(float *)(v10 + 4288) * 3.0 + *(float *)(self + 428);
    LOBYTE(v3) = sub_416F80((_DWORD *)v10, 1);
    *(_BYTE *)(self + 440) = 2;
  }
  else
  {
    LOBYTE(v3) = *(_BYTE *)(dword_4F5CC4 + 937);
    if ( !(_BYTE)v3 )
    {
      sub_4164A0((_DWORD *)v4, 6);
      LOBYTE(v3) = sub_416F80(*(_DWORD **)(self + 444), 1);
    }
    *(_BYTE *)(self + 440) = 1;
  }
  return v3;
}
