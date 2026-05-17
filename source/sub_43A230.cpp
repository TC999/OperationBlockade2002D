//----- (0043A230) --------------------------------------------------------
int __thiscall sub_43A230(int *this, int ArgList)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // edi
  int i; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int **v12; // edi
  int v13; // ebx
  int result; // eax
  float v15; // [esp+0h] [ebp-130h]
  _DWORD v16[3]; // [esp+14h] [ebp-11Ch] BYREF
  char Buffer[260]; // [esp+20h] [ebp-110h] BYREF
  int v18; // [esp+12Ch] [ebp-4h]

  v3 = operator new(0x15Cu);
  v18 = 0;
  if ( v3 )
    v4 = sub_41C6A0(v3);
  else
    v4 = 0;
  v18 = -1;
  this[12] = (int)v4;
  sub_41C760((int)v4, aSoundsNewspape);
  sub_41CA40(this[12]);
  v15 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(this[12], v15);
  sub_41CD90(this[12]);
  sub_4229D0("Showing Newspaper #%d", ArgList);
  if ( !*(_BYTE *)(dword_520970 + 296) )
    *(_BYTE *)(dword_520970 + 296) = 1;
  sub_43A1E0(this);
  (*(void (__thiscall **)(int *, int))(*this + 24))(this, 1);
  this[5] = ArgList;
  v5 = 0;
  v6 = v16;
  do
  {
    v7 = v5 + 1;
    sprintf(Buffer, ".\\Newspapers\\%s %03d.tga", off_4AAEC8[ArgList], v5 + 1);
    *v6 = sub_409AF0(Buffer, 1);
    v5 = v7;
    ++v6;
  }
  while ( v7 < 3 );
  for ( i = 0; i < 4; ++i )
  {
    v9 = operator new(0x80u);
    v18 = 1;
    if ( v9 )
      v10 = sub_412AB0(v9);
    else
      v10 = 0;
    v18 = -1;
    this[i + 6] = (int)v10;
    v11 = i;
    if ( i >= 2 )
      v11 = 2;
    sub_4131B0(v10, (_DWORD *)v16[v11]);
    sub_413120(1148862464);
    sub_428680(this, this[i + 6]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this[i + 6] + 24))(this[i + 6], 1);
    if ( (unsigned int)i < 2 )
    {
      sub_413130(0, 0, 1065353216, 1065353216);
    }
    else if ( i == 2 )
    {
      sub_413130(0, 0, 1065353216, 1056964608);
    }
    else if ( i == 3 )
    {
      sub_413130(0, 1056964608, 1065353216, 1065353216);
    }
  }
  v12 = (int **)v16;
  v13 = 3;
  do
  {
    result = sub_422230(*v12++);
    --v13;
  }
  while ( v13 );
  this[11] = 0;
  return result;
}
