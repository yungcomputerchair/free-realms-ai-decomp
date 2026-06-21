// addr: 0x010cd2c0
// name: GuiDataModules_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiDataModules_ctor(undefined4 *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **local_1c;
  undefined *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs GuiDataModules, installs its vtables, reads the PathUiModules
                       setting, and creates the associated UI modules data source/table. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164ac6b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  GuiDsTable_ctor(param_1,param_2);
  *param_1 = GuiDataModules::vftable;
  param_1[0xc] = GuiDataModules::vftable;
  param_1[0xd] = GuiDataModules::vftable;
  local_1c = SoeUtil::IString<char>::vftable;
  local_18 = &DAT_01cb9368;
  local_10 = 0;
  local_14 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00977740("PathUiModules",&local_1c);
  pvVar3 = Mem_Alloc(0xb8);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_010cd200(local_18,param_1);
  }
  param_1[0x95] = uVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c = SoeUtil::IString<char>::vftable;
  if (0 < local_10) {
    piVar5 = (int *)(local_18 + -4);
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (*(code *)SoeUtil::IString<char>::vftable[2])(piVar5,uVar2);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

