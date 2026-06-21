// addr: 0x00a5ab40
// name: Stream_ReadTwoVec4AndU32
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadTwoVec4AndU32(void * reader, void * outRecord) */

void __cdecl Stream_ReadTwoVec4AndU32(void *reader,void *outRecord)

{
                    /* Reads two Vec4 values followed by one 32-bit field into an output record.
                       Exact class semantics are unknown. */
  Stream_ReadVec4(reader,outRecord);
  Stream_ReadVec4(reader,(float *)((int)outRecord + 0x10));
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)outRecord + 0x20) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)((int)outRecord + 0x20) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

