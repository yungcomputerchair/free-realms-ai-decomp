// addr: 0x00aafb50
// name: Stream_ReadU32List
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU32List(void * reader) */

void __cdecl Stream_ReadU32List(void *reader)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
                    /* Clears an existing small list, reads a count, appends that many nodes, and
                       fills each with one 32-bit stream value. Exact owning field is unknown. */
  FUN_00aaf700();
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar4 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar4 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      puVar2 = (undefined4 *)FUN_00aac9f0();
      if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
        *puVar2 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
      }
      else {
        *puVar2 = **(undefined4 **)((int)reader + 8);
        *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

