// addr: 0x014ec370
// name: AccountCommand_IntroduceAccount_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall AccountCommand_IntroduceAccount_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs AccountCommand_IntroduceAccount with base AccountCommand state,
                       strings, and an owned PropertySet. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  *param_1 = AccountCommand_IntroduceAccount::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  param_1[0x11] = pvVar1;
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}

