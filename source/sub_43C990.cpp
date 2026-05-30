//----- (0043C990) --------------------------------------------------------
int __cdecl sub_43C990(int self, int a2)
{
  const char *v3; // eax
  const char *v4; // eax

  sub_4233C0((_DWORD *)self, a2, aObjectives);
  *(_DWORD *)(self + 44) = 0;
  *(_DWORD *)(self + 48) = 0;
  *(_DWORD *)(self + 52) = 0;
  *(_BYTE *)(self + 56) = 1;
  *(_DWORD *)self = &off_4997B8;
  v3 = sub_424350((_DWORD *)self, aTitle);
  *(_DWORD *)(self + 68) = v3;
  sub_421110(*((LPVOID **)v3 + 28), AppName);
  v4 = sub_424350((_DWORD *)self, aObjectivetext);
  *(_DWORD *)(self + 72) = v4;
  *((_BYTE *)v4 + 45) = 0;
  *(_DWORD *)(self + 60) = 0;
  *(_DWORD *)(self + 64) = 0;
  *(_DWORD *)(self + 76) = 0;
  return self;
}
