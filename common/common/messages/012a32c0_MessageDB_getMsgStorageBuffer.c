// addr: 0x012a32c0
// name: MessageDB_getMsgStorageBuffer
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_getMsgStorageBuffer(void * this, void * outBuffer) */

void * __thiscall MessageDB_getMsgStorageBuffer(void *this,void *outBuffer)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Retrieves the DBM buffer named 'msgStorage' from the storage object at
                       this+0x38. The returned value is passed to storage read/write routines. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b8b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012326a0(outBuffer,"msgStorage",(int)this + 0x38,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return outBuffer;
}

