// addr: 0x00a5d780
// name: Stream_ReadVec4U32List
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4U32List(void * reader) */

void __cdecl Stream_ReadVec4U32List(void *reader)

{
  int *piVar1;
  float *outVec4;
  int iVar2;
  int iVar3;
  
                    /* Clears a list, reads a count, appends entries, and reads one Vec4 plus a
                       32-bit field into each entry. Exact list type is unknown. */
  FUN_00a58120();
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
      outVec4 = (float *)FUN_00a54af0();
      Stream_ReadVec4(reader,outVec4);
      if (*(float **)((int)reader + 0xc) < *(float **)((int)reader + 8) + 1) {
        outVec4[4] = 0.0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
      }
      else {
        outVec4[4] = **(float **)((int)reader + 8);
        *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

