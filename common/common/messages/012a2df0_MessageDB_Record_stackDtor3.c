// addr: 0x012a2df0
// name: MessageDB_Record_stackDtor3
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MessageDB_Record_stackDtor3(void) */

void MessageDB_Record_stackDtor3(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another compiler-generated cleanup thunk for a message record/string object,
                       forwarding to the shared destructor. It likely belongs to a distinct template
                       instantiation. */
  puStack_8 = &LAB_0166b7ab;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  MessageDB_Record_dtor((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

