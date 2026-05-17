//----- (0041C680) --------------------------------------------------------
LPDIRECTSOUND sub_41C680()
{
  LPDIRECTSOUND result; // eax

  result = ppDS;
  if ( ppDS )
  {
    result = (LPDIRECTSOUND)ppDS->lpVtbl->Release(ppDS);
    ppDS = 0;
  }
  return result;
}
