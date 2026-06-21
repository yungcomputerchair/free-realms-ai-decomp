// addr: 0x00aafa90
// name: Stream_ReadU64Array
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU64Array(void * reader, void * array) */

void __cdecl Stream_ReadU64Array(void *reader,void *array)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Reads a signed count, resizes a destination array if needed, then reads that
                       many uint64 values with Stream_ReadU64. Used in housing/fixture-related
                       record parsers. */
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
    if (iVar4 < 0) goto LAB_00aafb02;
  }
  if (iVar4 <= (int)piVar2 - *(int *)((int)reader + 8)) {
    if (*(int *)((int)array + 8) < iVar4) {
      FUN_00aaa4f0(iVar4);
    }
    else {
      *(int *)((int)array + 8) = iVar4;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        if (*(char *)((int)reader + 0x10) != '\0') {
          return;
        }
        Stream_ReadU64(reader,(ulonglong *)(*(int *)((int)array + 4) + iVar3 * 8));
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    return;
  }
LAB_00aafb02:
  *(undefined1 *)((int)reader + 0x10) = 1;
  *(int **)((int)reader + 8) = piVar2;
  return;
}

