// addr: 0x012a45e0
// name: MessageDB_IntTextMap_stackDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MessageDB_IntTextMap_stackDtor(void) */

void MessageDB_IntTextMap_stackDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compiler-generated cleanup thunk for an integer-to-text map. It delegates to
                       MessageDB_IntTextMap_dtor. */
  puStack_8 = &LAB_0166badb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  MessageDB_IntTextMap_dtor((void *)(in_ECX + 4));
  ExceptionList = puStack_8;
  return;
}

