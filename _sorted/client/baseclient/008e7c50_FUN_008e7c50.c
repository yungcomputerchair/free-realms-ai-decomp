// addr: 0x008e7c50
// name: FUN_008e7c50
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void deserializeDwordPairList(void * reader) */

void __cdecl deserializeDwordPairList(void *reader)

{
  int *piVar1;
  void *this;
  int iVar2;
  void *unaff_EDI;
  int iVar3;
  
                    /* Deserializes a counted list by clearing it, reading an element count,
                       appending that many nodes, and reading two dwords into each node payload. */
  FUN_008d4b10();
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar2 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      this = (void *)FUN_008c12a0();
      stream_readTwoDwords(this,reader,unaff_EDI);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

