// addr: 0x012a3330
// name: MessageDB_getMsgIndexBuffer
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_getMsgIndexBuffer(void * this, void * outBuffer) */

void * __thiscall MessageDB_getMsgIndexBuffer(void *this,void *outBuffer)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Retrieves the DBM buffer named 'msgIndex' from the storage object at
                       this+0x38. MessageDB uses this buffer for id-to-offset index serialization.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b8f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012326a0(outBuffer,"msgIndex",(int)this + 0x38,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return outBuffer;
}

