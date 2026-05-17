//----- (004898CA) --------------------------------------------------------
size_t __cdecl sub_4898CA(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // esi

  _lock_file(Stream);
  v4 = fread(Buffer, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v4;
}
