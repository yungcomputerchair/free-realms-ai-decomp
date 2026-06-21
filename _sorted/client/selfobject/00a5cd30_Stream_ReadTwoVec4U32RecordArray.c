// addr: 0x00a5cd30
// name: Stream_ReadTwoVec4U32RecordArray
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadTwoVec4U32RecordArray(void * reader, void * array) */

void __cdecl Stream_ReadTwoVec4U32RecordArray(void *reader,void *array)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Reads a count, resizes an array of 0x30-byte records, then deserializes each
                       as two Vec4 values plus a dword. Exact owner type is unknown. */
  piVar2 = *(int **)((int)reader + 0xc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (piVar2 < piVar1) {
    iVar5 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = piVar2;
  }
  else {
    iVar5 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
    if (iVar5 < 0) goto LAB_00a5cda8;
  }
  if (iVar5 <= (int)piVar2 - *(int *)((int)reader + 8)) {
    if (*(int *)((int)array + 8) < iVar5) {
      FUN_00a547f0(iVar5);
    }
    else {
      *(int *)((int)array + 8) = iVar5;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      do {
        if (*(char *)((int)reader + 0x10) != '\0') {
          return;
        }
        Stream_ReadTwoVec4AndU32(reader,(void *)(*(int *)((int)array + 4) + iVar3));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar4 < iVar5);
    }
    return;
  }
LAB_00a5cda8:
  *(undefined1 *)((int)reader + 0x10) = 1;
  *(int **)((int)reader + 8) = piVar2;
  return;
}

