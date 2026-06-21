// addr: 0x0101c770
// name: Stream_ReadVec4AtOffset
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4AtOffset(void * outRecord, void * reader) */

void __thiscall Stream_ReadVec4AtOffset(void *this,void *outRecord,void *reader)

{
                    /* Reads one Vec4 into offset +0x10 of an unknown record. No type evidence is
                       present. */
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x10));
  return;
}

