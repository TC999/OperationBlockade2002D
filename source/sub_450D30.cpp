//----- (00450D30) --------------------------------------------------------
extern char aModel_0[];
extern char aChasenode[];
extern char aViewerIniDoesn[];
extern char aCouldnTCreateV[];

int __cdecl sub_450D30(int self)
{
  int v2; // eax
  _DWORD *v3; // ecx
  char *v4; // eax
  const char *v5; // ecx
  int v6; // eax
  int i; // edi
  void (__cdecl ***v8)(_DWORD, int); // ecx
  int v9; // eax
  char *v11; // [esp-8h] [ebp-54h]
  const char *v12; // [esp-4h] [ebp-50h]
  char ArgList[4]; // [esp+4h] [ebp-48h] BYREF
  char *String1; // [esp+8h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  if ( *(int *)(self + 176) < 0 )
    *(_DWORD *)(self + 176) = 0;
  sprintf(Buffer, "Model %d", *(_DWORD *)(self + 176) + 1);
  while ( !sub_40AAF0((int)*(_DWORD **)(self + 172), Buffer, 0) )
  {
    if ( !*(_DWORD *)(self + 176) )
      sub_4281B0(aViewerIniDoesn);
    v2 = *(_DWORD *)(self + 176) - 1;
    *(_DWORD *)(self + 176) = v2;
    sprintf(Buffer, "Model %d", v2 + 1);
  }
  sub_40AA40((int)*(_DWORD **)(self + 172), Buffer);
  sub_40AFC0((void *)(uintptr_t)*(unsigned int *)(self + 172), aModel_0, (uint32 *)ArgList);
  v3 = *(_DWORD **)(self + 184);
  if ( v3 )
  {
    sub_403B70(v3);
    *(_DWORD *)(self + 184) = 0;
  }
  v4 = sub_4069C0(*(_DWORD **)(self + 128), *(char **)ArgList);
  v5 = *(const char **)ArgList;
  *(_DWORD *)(self + 184) = (DWORD)(uintptr_t)v4;
  sub_4282E0(v4 != 0, (char *)"Couldn't load model %s", v5);
  if ( sub_40ABC0((int)*(_DWORD **)(self + 172), aChasenode, 0) )
  {
    sub_40AFC0((void *)(uintptr_t)*(unsigned int *)(self + 172), aChasenode, (uint32 *)&String1);
    v6 = sub_405A30(*(_DWORD **)(self + 184), String1, -1, 1);
    v12 = *(const char **)ArgList;
    v11 = String1;
    *(_DWORD *)(self + 180) = v6;
    sub_4282E0(v6 > -1, (char *)"Can't find node %s in model %s", v11, v12);
  }
  else
  {
    *(_DWORD *)(self + 180) = 0;
  }
  for ( i = 1; ; ++i )
  {
    sprintf(Buffer, "Anim%d", i);
    if ( !sub_40ABC0((int)*(_DWORD **)(self + 172), Buffer, 0) )
      break;
    sub_40AFC0((void *)Buffer, aModel_0, (_DWORD *)&String1);
    if ( sub_403E80(*(_DWORD **)(self + 184), String1) < 0 )
      sub_4281B0((char *)"Couldn't load animation %s", String1);
  }
  if ( *(_DWORD *)(self + 188) )
  {
    sub_4286C0((_DWORD *)self, *(_DWORD *)(self + 188));
    v8 = *(void (__cdecl ****)(_DWORD, int))(self + 188);
    if ( v8 )
      (**v8)((uint32)(uintptr_t)v8, 1);
  }
  v9 = sub_406A90(*(_DWORD *)(self + 184), 1);
  *(_DWORD *)(self + 188) = v9;
  if ( !v9 )
    sub_4281B0(aCouldnTCreateV);
  if ( !*(_DWORD *)(self + 268) )
    *(_DWORD *)(v9 + 36) = 1065353216;
  if ( sub_408890((_DWORD **)*(unsigned int *)(self + 188)) > 1 )
    sub_408860((_DWORD *)self, 1);
  *(_BYTE *)(*(_DWORD *)(self + 188) + 48) = 1;
  return sub_428680((_DWORD *)self, *(_DWORD *)(self + 188));
}
