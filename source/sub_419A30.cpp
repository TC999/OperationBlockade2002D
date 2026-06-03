//----- (00419A30) --------------------------------------------------------
char __cdecl sub_419A30(_DWORD *self, float a2, float a3, float a4)
{
  int v5; // ebx
  int v6; // edi
  float *i; // esi
  long double v8; // st7
  float v10; // [esp+10h] [ebp-FC4h]
  float v11; // [esp+14h] [ebp-FC0h]
  float v12; // [esp+18h] [ebp-FBCh]
  float v13; // [esp+1Ch] [ebp-FB8h]
  float v14; // [esp+20h] [ebp-FB4h]
  float v15[3]; // [esp+28h] [ebp-FACh] BYREF
  _BYTE v16[12]; // [esp+34h] [ebp-FA0h] BYREF
  char v17; // [esp+40h] [ebp-F94h] BYREF

  v5 = self[1033];
  qmemcpy(v16, self + 33, 4 * ((unsigned int)(20 * v5) >> 2));
  sub_4164A0(self, 0);
  v6 = 0;
  if ( v5 <= 0 )
    return 1;
  v13 = -a4;
  v12 = -a3;
  v14 = -a2;
  for ( i = (float *)&v17; ; i += 5 )
  {
    v11 = v13 == a4 ? -a4 : fabs((double)rand() * 0.000030518509) * (a4 - v13) + v13;
    v10 = v12 == a3 ? -a3 : fabs((double)rand() * 0.000030518509) * (a3 - v12) + v12;
    v8 = v14 == a2 ? v14 : fabs((double)rand() * 0.000030518509) * (a2 - v14) + v14;
    v15[0] = v8 + *(i - 2);
    v15[1] = v10 + *(i - 1);
    v15[2] = v11 + *i;
    if ( !sub_416350((int)self, (_DWORD*)(v15), 1) )
      break;
    if ( ++v6 >= v5 )
      return 1;
  }
  return 0;
}
