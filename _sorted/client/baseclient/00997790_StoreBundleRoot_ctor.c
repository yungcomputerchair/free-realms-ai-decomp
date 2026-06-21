// addr: 0x00997790
// name: StoreBundleRoot_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall StoreBundleRoot_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a StoreBundleRoot ctor routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159c6e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00822990(param_2);
  *param_1 = InGamePurchaseDataSource::StoreBundleRoot::vftable;
  ExceptionList = local_c;
  return param_1;
}

