extern int dword_520970;
extern CHAR AppName[];

//----- (0045A890) --------------------------------------------------------
int __stdcall sub_45A890(int ArgList, int a2, int a3)
{
  unsigned int v3; // eax

  sub_4229D0((char *)"StartSinglePlayerMission(mission=%d, sky=%d, clouds=%d)", ArgList, a2, a3);
  sub_436E20((char *)(uintptr_t)*(_DWORD *)(dword_520970 + 224));
  v3 = sub_436E40((char *)(uintptr_t)*(_DWORD *)(dword_520970 + 224), AppName);
  sub_436EC0((_DWORD *)(uintptr_t)*(_DWORD *)(dword_520970 + 224), v3, 1065353216, 0);
  sub_45EC70((_DWORD *)(uintptr_t)*(_DWORD *)(dword_520970 + 280));
  return sub_45A920((_DWORD *)(uintptr_t)*(_DWORD *)(dword_520970 + 236), ArgList, a2, a3);
}
