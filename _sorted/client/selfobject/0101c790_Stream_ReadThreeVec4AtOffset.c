// addr: 0x0101c790
// name: Stream_ReadThreeVec4AtOffset
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadThreeVec4AtOffset(void * outRecord, void * reader) */

void __thiscall Stream_ReadThreeVec4AtOffset(void *this,void *outRecord,void *reader)

{
                    /* Reads three Vec4 values into offsets +0x10, +0x20, and +0x30 of an unknown
                       record. Duplicate shape of 0101c4c0. */
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x10));
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x20));
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x30));
  return;
}

