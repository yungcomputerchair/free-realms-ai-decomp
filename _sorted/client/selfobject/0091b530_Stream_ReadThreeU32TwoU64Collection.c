// addr: 0x0091b530
// name: Stream_ReadThreeU32TwoU64Collection
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadThreeU32TwoU64Collection(void * reader, void * collection) */

void __cdecl Stream_ReadThreeU32TwoU64Collection(void *reader,void *collection)

{
  int *piVar1;
  void *this;
  int iVar2;
  int iVar3;
  void *unaff_EDI;
  
                    /* Clears an existing collection, reads a count, appends entries, deserializes
                       each with Stream_ReadThreeU32AndTwoU64, then runs a follow-up helper. Element
                       type is unknown. */
  iVar3 = *(int *)((int)collection + 4);
  while (iVar3 != 0) {
    FUN_00909e60(iVar3);
    iVar3 = *(int *)((int)collection + 4);
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
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      this = (void *)FUN_008fc530();
      Stream_ReadThreeU32AndTwoU64(this,reader,unaff_EDI);
      FUN_008e9d70(reader);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

