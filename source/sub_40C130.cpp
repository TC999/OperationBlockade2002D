extern char aCanTObtainKeyb[];
extern char aCanTSetDirecti[];
extern char aCanTSetKeyboar[];

//----- (0040C130) --------------------------------------------------------
_DWORD *__cdecl sub_40C130(_DWORD **self, _DWORD *a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *result; // eax
  int v7; // esi
  char *v8; // [esp+14h] [ebp-24h]
  _DWORD v9[5]; // [esp+24h] [ebp-14h] BYREF

  v4 = (_DWORD *)(self + 3);
  v5 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **, _DWORD))(*self[2] + 12))(self[2], &unk_499E24, self + 3, 0);
  if ( v5 < 0 )
  {
    v8 = aCanTObtainKeyb;
LABEL_7:
    sub_403A30(a2, v5, v8);
    return a2;
  }
  v5 = (*(int (__stdcall **)(_DWORD, void *))(*(_DWORD *)*v4 + 44))(*v4, &unk_499D94);
  if ( v5 < 0 )
  {
    v8 = aCanTSetDirecti;
    goto LABEL_7;
  }
  v5 = (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*v4 + 52))(*v4, a3, 6 - (a4 != 0));
  if ( v5 < 0 )
  {
    v8 = aCanTSetKeyboar;
    goto LABEL_7;
  }
  v7 = *v4;
  v9[0] = 20;
  v9[1] = 16;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 16;
  (*(void (__stdcall **)(int, int, _DWORD *))(*(_DWORD *)v7 + 24))(v7, 1, v9);
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
