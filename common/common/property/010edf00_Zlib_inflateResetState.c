// addr: 0x010edf00
// name: Zlib_inflateResetState
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Zlib_inflateResetState(void * stream) */

int __cdecl Zlib_inflateResetState(void *stream)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* Resets zlib/inflate stream fields and initializes the internal state
                       window/list pointers. Evidence: called by nearby inflate setup, clears stream
                       counters and state fields, sets flag 0x8000 and self-referential pointers,
                       returns zlib-style 0 or -2. */
  if ((stream != (void *)0x0) &&
     (puVar2 = *(undefined4 **)((int)stream + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)((int)stream + 0x14) = 0;
    *(undefined4 *)((int)stream + 8) = 0;
    *(undefined4 *)((int)stream + 0x18) = 0;
    *(undefined4 *)((int)stream + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    return 0;
  }
  return -2;
}

