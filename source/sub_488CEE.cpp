//----- (00488CEE) --------------------------------------------------------
void __cdecl sub_488CEE(LPVOID lpMem)
{
  int v1; // eax
  bool v2; // zf
  int v3; // eax
  int v4; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+10h] [ebp-24h]
  int v6; // [esp+14h] [ebp-20h] BYREF
  int v7; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  if ( lpMem )
  {
    if ( dword_523A84 == 3 )
    {
      ((void (__cdecl *)(int))_lock)(9);
      *((int*)&ms_exc + 5) = 0;
      v1 = ((int (__cdecl *)(LPVOID, LPVOID))__sbh_find_block)(lpMem, lpMem);
      v7 = v1;
      if ( v1 )
        sub_48D6E8((_DWORD *)v1, (int)lpMem);
      *((int*)&ms_exc + 5) = -1;
      ((void (__cdecl *)(int))_unlock)(9);
      v2 = v7 == 0;
    }
    else
    {
      if ( dword_523A84 != 2 )
      {
LABEL_11:
        HeapFree(hHeap, 0, lpMem);
        return;
      }
      ((void (__cdecl *)(int))_lock)(9);
      *((int*)&ms_exc + 5) = 1;
      v3 = sub_48E418((unsigned int)lpMem, (_DWORD *)&v4, (unsigned int *)&v6);
      v5 = v3;
      if ( v3 )
        sub_48E46F(v4, v6, (_BYTE *)v3);
      *((int*)&ms_exc + 5) = -1;
      ((void (__cdecl *)(int))_unlock)(9);
      v2 = v5 == 0;
    }
    if ( !v2 )
      return;
    goto LABEL_11;
  }
}
