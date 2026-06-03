//----- (0040E8E0) --------------------------------------------------------
int __cdecl sub_40E8E0(int a1)
{
  int v1; // esi

  EnterCriticalSection(lpCriticalSection);
  v1 = (int)sub_40E910(a1);
  LeaveCriticalSection(lpCriticalSection);
  return v1;
}
