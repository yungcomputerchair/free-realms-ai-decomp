// addr: 0x009d55a0
// name: Stream_ReadVec4BlockRecord
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4BlockRecord(void * record, void * reader) */

void __thiscall Stream_ReadVec4BlockRecord(void *this,void *record,void *reader)

{
                    /* Reads one 32-bit id followed by four Vec4 values into a fixed-size record. It
                       is a duplicate-shape parser used by another collection helper. */
  if (*(undefined4 **)((int)record + 0xc) < *(undefined4 **)((int)record + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)record + 0x10) = 1;
    *(undefined4 *)((int)record + 8) = *(undefined4 *)((int)record + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)record + 8);
    *(int *)((int)record + 8) = *(int *)((int)record + 8) + 4;
  }
  Stream_ReadVec4(record,(float *)((int)this + 0x10));
  Stream_ReadVec4(record,(float *)((int)this + 0x20));
  Stream_ReadVec4(record,(float *)((int)this + 0x30));
  Stream_ReadVec4(record,(float *)((int)this + 0x40));
  return;
}

