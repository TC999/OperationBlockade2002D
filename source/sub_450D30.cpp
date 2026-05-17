//----- (00450D30) --------------------------------------------------------
int __thiscall sub_450D30(int this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  char *v4; // eax
  const char *v5; // ecx
  int v6; // eax
  int i; // edi
  void (__thiscall ***v8)(_DWORD, int); // ecx
  int v9; // eax
  char *v11; // [esp-8h] [ebp-54h]
  const char *v12; // [esp-4h] [ebp-50h]
  char ArgList[4]; // [esp+4h] [ebp-48h] BYREF
  char *String1; // [esp+8h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  if ( *(int *)(this + 176) < 0 )
    *(_DWORD *)(this + 176) = 0;
  sprintf(Buffer, "Model %d", *(_DWORD *)(this + 176) + 1);
  while ( !sub_40AAF0(*(_DWORD **)(this + 172), Buffer, 0) )
  {
    if ( !*(_DWORD *)(this + 176) )
      sub_4281B0(aViewerIniDoesn);
    v2 = *(_DWORD *)(this + 176) - 1;
    *(_DWORD *)(this + 176) = v2;
    sprintf(Buffer, "Model %d", v2 + 1);
  }
  sub_40AA40(*(_DWORD *)(this + 172), Buffer);
  sub_40AFC0(aModel_0, (int)ArgList);
  v3 = *(_DWORD **)(this + 184);
  if ( v3 )
  {
    sub_403B70(v3);
    *(_DWORD *)(this + 184) = 0;
  }
  v4 = sub_4069C0(*(_DWORD **)(this + 128), *(char **)ArgList);
  v5 = *(const char **)ArgList;
  *(_DWORD *)(this + 184) = v4;
  sub_4282E0(v4 != 0, "Couldn't load model %s", v5);
  if ( sub_40ABC0(*(_DWORD **)(this + 172), aChasenode, 0) )
  {
    sub_40AFC0(aChasenode, (int)&String1);
    v6 = sub_405A30(*(_DWORD **)(this + 184), String1, -1, 1);
    v12 = *(const char **)ArgList;
    v11 = String1;
    *(_DWORD *)(this + 180) = v6;
    sub_4282E0(v6 > -1, "Can't find node %s in model %s", v11, v12);
  }
  else
  {
    *(_DWORD *)(this + 180) = 0;
  }
  for ( i = 1; ; ++i )
  {
    sprintf(Buffer, "Anim%d", i);
    if ( !sub_40ABC0(*(_DWORD **)(this + 172), Buffer, 0) )
      break;
    sub_40AFC0(Buffer, (int)&String1);
    if ( sub_403E80(*(_DWORD **)(this + 184), String1) < 0 )
      sub_4281B0("Couldn't load animation %s", String1);
  }
  if ( *(_DWORD *)(this + 188) )
  {
    sub_4286C0((_DWORD *)this, *(_DWORD *)(this + 188));
    v8 = *(void (__thiscall ****)(_DWORD, int))(this + 188);
    if ( v8 )
      (**v8)(v8, 1);
  }
  v9 = sub_406A90(*(_DWORD *)(this + 184), 1);
  *(_DWORD *)(this + 188) = v9;
  if ( !v9 )
    sub_4281B0(aCouldnTCreateV);
  if ( !*(_DWORD *)(this + 268) )
    *(_DWORD *)(v9 + 36) = 1065353216;
  if ( sub_408890(*(_DWORD *)(this + 188)) > 1 )
    sub_408860(1);
  *(_BYTE *)(*(_DWORD *)(this + 188) + 48) = 1;
  return sub_428680((_DWORD *)this, *(_DWORD *)(this + 188));
}
