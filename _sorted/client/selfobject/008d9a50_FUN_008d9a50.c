// addr: 0x008d9a50
// name: FUN_008d9a50
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_008d9a50(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocation/constructor wrapper for the unknown IString-bearing record
                       initialized by 008d0060. It returns the allocator-provided object pointer but
                       no class evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01585808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008d0060(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return param_1;
}

