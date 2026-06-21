// addr: 0x013675b0
// name: HashTable_ctor_013675b0
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall HashTable_ctor_013675b0(undefined4 param_1)

{
  undefined1 local_11;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a hash-table-like container and returns the object pointer. Its
                       callee allocates bucket/control storage, initializes with bucket count 9, and
                       sets two load/count fields to 1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167fb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_01366450(&local_11,&local_11);
  ExceptionList = local_c;
  return param_1;
}

