// addr: 0x00bddfa0
// name: ProgressiveQuestPacket_deserializeIntListA
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProgressiveQuestPacket_deserializeIntListA(void * reader, void * list) */

void __cdecl ProgressiveQuestPacket_deserializeIntListA(void *reader,void *list)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Reads a signed count from a bounded packet reader, resizes a list if needed,
                       then deserializes that many elements using FUN_00bdd9c0; marks the reader
                       failed on negative or out-of-bounds counts. */
  piVar2 = *(int **)((int)reader + 0xc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (piVar2 < piVar1) {
    iVar4 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = piVar2;
  }
  else {
    iVar4 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
    if (iVar4 < 0) goto LAB_00bde014;
  }
  if (iVar4 <= (int)piVar2 - *(int *)((int)reader + 8)) {
    if (*(int *)((int)list + 8) < iVar4) {
      FUN_00bdd760(iVar4);
    }
    else {
      *(int *)((int)list + 8) = iVar4;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        if (*(char *)((int)reader + 0x10) != '\0') {
          return;
        }
        FUN_00bdd9c0(reader);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    return;
  }
LAB_00bde014:
  *(undefined1 *)((int)reader + 0x10) = 1;
  *(int **)((int)reader + 8) = piVar2;
  return;
}

