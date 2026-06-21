// addr: 0x009d5b10
// name: Stream_ReadVec4BlockRecordWithType
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVec4BlockRecordWithType(void * record, void * reader) */

void __thiscall Stream_ReadVec4BlockRecordWithType(void *this,void *record,void *reader)

{
                    /* Reads two 32-bit header fields followed by four Vec4 values into a fixed-size
                       record. Exact record class is unknown. */
  if (*(undefined4 **)((int)record + 0xc) < *(undefined4 **)((int)record + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)record + 0x10) = 1;
    *(undefined4 *)((int)record + 8) = *(undefined4 *)((int)record + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)record + 8);
    *(int *)((int)record + 8) = *(int *)((int)record + 8) + 4;
  }
  if (*(undefined4 **)((int)record + 0xc) < *(undefined4 **)((int)record + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)record + 0x10) = 1;
    *(undefined4 *)((int)record + 8) = *(undefined4 *)((int)record + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)record + 8);
    *(int *)((int)record + 8) = *(int *)((int)record + 8) + 4;
  }
  Stream_ReadVec4(record,(float *)((int)this + 0x10));
  Stream_ReadVec4(record,(float *)((int)this + 0x20));
  Stream_ReadVec4(record,(float *)((int)this + 0x30));
  Stream_ReadVec4(record,(float *)((int)this + 0x40));
  return;
}

