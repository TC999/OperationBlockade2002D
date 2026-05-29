//----- (00450AC0) --------------------------------------------------------
int __thiscall sub_450AC0(int self, int a2, int a3)
{
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 208) + 24))(*(_DWORD *)(self + 208), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 212) + 24))(*(_DWORD *)(self + 212), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 216) + 24))(*(_DWORD *)(self + 216), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 220) + 24))(*(_DWORD *)(self + 220), (_BYTE)a2 == 0);
  *(_BYTE *)(*(_DWORD *)(self + 224) + 40) = (_BYTE)a2 == 0;
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 252) + 24))(*(_DWORD *)(self + 252), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 260) + 24))(*(_DWORD *)(self + 260), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 280) + 24))(*(_DWORD *)(self + 280), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(self + 236) + 24))(*(_DWORD *)(self + 236), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(self + 248) + 24))(*(_DWORD *)(self + 248), a2);
  if ( !(_BYTE)a2 )
    return sub_408EF0(self, *(_DWORD *)(self + 280));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(self + 264) + 24))(*(_DWORD *)(self + 264), 1);
  sub_408EF0(self, *(_DWORD *)(self + 264));
  if ( a3 >= 0 )
    return sub_439020(*(_DWORD *)(self + 248), a3);
  else
    return sub_438FF0(*(_DWORD **)(self + 248));
}
