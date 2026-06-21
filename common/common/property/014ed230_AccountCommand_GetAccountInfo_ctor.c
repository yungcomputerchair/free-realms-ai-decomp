// addr: 0x014ed230
// name: AccountCommand_GetAccountInfo_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AccountCommand_GetAccountInfo_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AccountCommand_GetAccountInfo with base AccountCommand state and
                       an owned PropertySet. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b14f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = AccountCommand_GetAccountInfo::vftable;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  param_1[2] = pvVar1;
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

