// addr: 0x0101c5e0
// name: Stream_ReadVec4U64U32Record
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4U64U32Record(void * outRecord, void * reader) */

void __thiscall Stream_ReadVec4U64U32Record(void *this,void *outRecord,void *reader)

{
  undefined4 *puVar1;
  
                    /* Reads a Vec4 at +0x10, a uint64 at +0x20, and a 32-bit field at +0x30 into an
                       unknown record. */
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x10));
  puVar1 = *(undefined4 **)((int)outRecord + 8);
  if (*(undefined4 **)((int)outRecord + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x20) = *puVar1;
    *(undefined4 *)((int)this + 0x24) = puVar1[1];
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 8;
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x30) = **(undefined4 **)((int)outRecord + 8);
  *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  return;
}

