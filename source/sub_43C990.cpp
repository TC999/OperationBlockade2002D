//----- (0043C990) --------------------------------------------------------
int __thiscall sub_43C990(int this, int a2)
{
  const char *v3; // eax
  const char *v4; // eax

  sub_4233C0((_DWORD *)this, a2, aObjectives);
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_BYTE *)(this + 56) = 1;
  *(_DWORD *)this = &off_4997B8;
  v3 = sub_424350((_DWORD *)this, aTitle);
  *(_DWORD *)(this + 68) = v3;
  sub_421110(*((LPVOID **)v3 + 28), AppName);
  v4 = sub_424350((_DWORD *)this, aObjectivetext);
  *(_DWORD *)(this + 72) = v4;
  *((_BYTE *)v4 + 45) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 76) = 0;
  return this;
}
