//----- (00426D40) --------------------------------------------------------
int sub_426D40()
{
  void *v0; // esi

  sub_4229D0(aCleanup);
  if ( dword_520970 )
  {
    (*(void (__cdecl **)(int))(*(_DWORD *)dword_520970 + 36))(dword_520970);
    if ( dword_520970 )
      (**(void (__cdecl ***)(int, int))dword_520970)(dword_520970, 1);
    dword_520970 = 0;
  }
  sub_4229D0(aGGameShutdownO);
  sub_41F390();
  sub_4229D0(aSpheredestroyW);
  sub_41F9E0();
  sub_4229D0(aSpritedestroyW);
  v0 = (void *)dword_520A00;
  if ( dword_520A00 )
  {
    sub_40BFD0((_DWORD *)dword_520A00);
    sub_4885A6(v0);
  }
  sub_4229D0(aDeleteInputlay);
  sub_41C680();
  sub_4229D0(aCleanupsoundWo);
  if ( *(_DWORD *)ArgList )
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ArgList + 8))(*(_DWORD *)ArgList);
  sub_4229D0(aDeviceReleaseW);
  if ( dword_520A14 )
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_520A14 + 8))(dword_520A14);
  sub_4229D0(aD3dReleaseWork);
  return sub_4885A6((LPVOID)dword_520A50);
}
