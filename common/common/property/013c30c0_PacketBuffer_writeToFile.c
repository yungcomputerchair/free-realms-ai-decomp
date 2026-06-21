// addr: 0x013c30c0
// name: PacketBuffer_writeToFile
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PacketBuffer_writeToFile(void * filename) */

bool PacketBuffer_writeToFile(void *filename)

{
  char *_Filename;
  FILE *_File;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  void *in_stack_00000008;
  FILE *stream;
  
                    /* Opens the supplied filename in binary write mode, writes the current packet
                       buffer contents, closes the file, and returns whether the full buffer size
                       was written. Evidence is fopen("wb"), PacketBuffer_identity,
                       PacketBuffer_getSize, fwrite, and size comparison. */
  if (*(uint *)((int)filename + 0x18) < 0x10) {
    _Filename = (char *)((int)filename + 4);
  }
  else {
    _Filename = *(char **)((int)filename + 4);
  }
  _File = _fopen(_Filename,"wb");
  if (_File == (FILE *)0x0) {
    return false;
  }
  puVar1 = PacketBuffer_identity(in_stack_00000008);
  stream = _File;
  sVar2 = PacketBuffer_getSize(in_stack_00000008);
  sVar2 = _fwrite((void *)*puVar1,1,sVar2,stream);
  _fclose(_File);
  sVar3 = PacketBuffer_getSize(in_stack_00000008);
  return sVar2 == sVar3;
}

