// addr: 0x008fc8c0
// name: Stream_ReadU32PairCollection
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU32PairCollection(void * reader, void * collection) */

void __cdecl Stream_ReadU32PairCollection(void *reader,void *collection)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  void *unaff_EDI;
  int iVar4;
  undefined4 local_4;
  
                    /* Clears a collection, reads a count, then appends entries keyed by a dword and
                       fills each with a pair of 32-bit values. Used inside client/profile data
                       parsers. */
  iVar3 = *(int *)((int)collection + 8);
  while (iVar3 != 0) {
    FUN_008bfcf0(iVar3);
    iVar3 = *(int *)((int)collection + 8);
  }
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar3 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar3 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      puVar2 = *(undefined4 **)((int)reader + 8) + 1;
      if (*(undefined4 **)((int)reader + 0xc) < puVar2) {
        local_4 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 **)((int)reader + 8) = *(undefined4 **)((int)reader + 0xc);
      }
      else {
        local_4 = **(undefined4 **)((int)reader + 8);
        *(undefined4 **)((int)reader + 8) = puVar2;
      }
      this = (void *)FUN_008e8ec0(&local_4);
      Stream_ReadU32Pair(this,reader,unaff_EDI);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

