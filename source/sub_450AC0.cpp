//----- (00450AC0) --------------------------------------------------------
int __thiscall sub_450AC0(int this, int a2, int a3)
{
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 208) + 24))(*(_DWORD *)(this + 208), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 212) + 24))(*(_DWORD *)(this + 212), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 216) + 24))(*(_DWORD *)(this + 216), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 220) + 24))(*(_DWORD *)(this + 220), (_BYTE)a2 == 0);
  *(_BYTE *)(*(_DWORD *)(this + 224) + 40) = (_BYTE)a2 == 0;
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 252) + 24))(*(_DWORD *)(this + 252), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 260) + 24))(*(_DWORD *)(this + 260), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 280) + 24))(*(_DWORD *)(this + 280), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, bool))(**(_DWORD **)(this + 236) + 24))(*(_DWORD *)(this + 236), (_BYTE)a2 == 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 248) + 24))(*(_DWORD *)(this + 248), a2);
  if ( !(_BYTE)a2 )
    return sub_408EF0(this, *(_DWORD *)(this + 280));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 264) + 24))(*(_DWORD *)(this + 264), 1);
  sub_408EF0(this, *(_DWORD *)(this + 264));
  if ( a3 >= 0 )
    return sub_439020(*(_DWORD *)(this + 248), a3);
  else
    return sub_438FF0(*(_DWORD **)(this + 248));
}
