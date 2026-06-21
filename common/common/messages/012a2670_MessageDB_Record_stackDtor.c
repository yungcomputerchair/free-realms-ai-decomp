// addr: 0x012a2670
// name: MessageDB_Record_stackDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MessageDB_Record_stackDtor(void) */

void MessageDB_Record_stackDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated cleanup thunk that destroys a stack-allocated message
                       record/string object. It delegates to MessageDB_Record_dtor. */
  puStack_8 = &LAB_0166b53b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  MessageDB_Record_dtor((void *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}

