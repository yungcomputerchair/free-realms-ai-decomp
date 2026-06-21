// addr: 0x0101c6f0
// name: Stream_ReadVec4AndTwoU32
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4AndTwoU32(void * outRecord, void * reader) */

void __thiscall Stream_ReadVec4AndTwoU32(void *this,void *outRecord,void *reader)

{
                    /* Reads a Vec4 at +0x10 followed by two 32-bit fields at +0x20/+0x24. Exact
                       record class is unknown. */
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x10));
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x24) = **(undefined4 **)((int)outRecord + 8);
  *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  return;
}

