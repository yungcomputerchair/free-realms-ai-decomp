// addr: 0x00e39600
// name: FileChunkReader_read512
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FileChunkReader_read512(void * unused, int * state, int * outSize) */

void * __cdecl FileChunkReader_read512(void *unused,int *state,int *outSize)

{
  int iVar1;
  
                    /* Implements a file-backed chunk reader: first returns a one-byte static buffer
                       when primed, then reads up to 0x200 bytes from FILE* state[1] until EOF. It
                       writes the number of bytes read to outSize. */
  if (*state != 0) {
    *state = 0;
    *outSize = 1;
    return &DAT_01770548;
  }
  iVar1 = CRT_feof((void *)state[1]);
  if (iVar1 != 0) {
    return (void *)0x0;
  }
  iVar1 = FUN_00d8ae0b(state + 2,1,0x200,state[1]);
  *outSize = iVar1;
  return (void *)(-(uint)(iVar1 != 0) & (uint)(state + 2));
}

