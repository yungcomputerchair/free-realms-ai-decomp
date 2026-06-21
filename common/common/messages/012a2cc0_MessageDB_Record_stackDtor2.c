// addr: 0x012a2cc0
// name: MessageDB_Record_stackDtor2
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MessageDB_Record_stackDtor2(void) */

void MessageDB_Record_stackDtor2(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated stack cleanup thunk for a message record/string object. It
                       forwards to the shared record destructor. */
  puStack_8 = &LAB_0166b71b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  MessageDB_Record_dtor((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

