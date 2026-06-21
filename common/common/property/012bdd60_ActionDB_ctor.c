// addr: 0x012bdd60
// name: ActionDB_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall ActionDB_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActionDB, initializes its trees/maps, and loads the action index.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166dfac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0129d6c0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  FUN_0129d730();
  local_4._0_1_ = 1;
  FUN_012a0600();
  local_4._0_1_ = 2;
  PropertyTree1D_ctor((int)(param_1 + 10));
  local_4 = CONCAT31(local_4._1_3_,3);
  *param_1 = 0x9f3;
  ActionDB_loadIndex(param_1,0x9f3);
  ExceptionList = local_c;
  return param_1;
}

