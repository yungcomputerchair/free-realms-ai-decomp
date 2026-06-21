// addr: 0x009d61b0
// name: Stream_ReadVec4BlockRecordList
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4BlockRecordList(void * reader, void * list) */

void __cdecl Stream_ReadVec4BlockRecordList(void *reader,void *list)

{
  int *piVar1;
  int *piVar2;
  void *unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Reads a signed count, resizes the destination collection if needed, then
                       deserializes that many Vec4 block records. Element type is not identified. */
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
    if (iVar5 < 0) goto LAB_009d6224;
  }
  if (iVar5 <= (int)piVar2 - *(int *)((int)reader + 8)) {
    if (*(int *)((int)list + 8) < iVar5) {
      FUN_009d3620(iVar5);
    }
    else {
      *(int *)((int)list + 8) = iVar5;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      do {
        if (*(char *)((int)reader + 0x10) != '\0') {
          return;
        }
        Stream_ReadVec4BlockRecord((void *)(*(int *)((int)list + 4) + iVar3),reader,unaff_EBX);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x50;
      } while (iVar4 < iVar5);
    }
    return;
  }
LAB_009d6224:
  *(undefined1 *)((int)reader + 0x10) = 1;
  *(int **)((int)reader + 8) = piVar2;
  return;
}

