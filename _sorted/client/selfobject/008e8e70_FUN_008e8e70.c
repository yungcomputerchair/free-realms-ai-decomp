// addr: 0x008e8e70
// name: FUN_008e8e70
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_008e8e70(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocation/constructor wrapper for the large unknown record constructed by
                       008dccd0. It contains no additional type evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01587358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008dccd0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return param_1;
}

