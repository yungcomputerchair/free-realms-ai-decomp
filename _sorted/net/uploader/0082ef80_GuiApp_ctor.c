// addr: 0x0082ef80
// name: GuiApp_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GuiApp_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiApp and initializes its UI helper members. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156bf2f;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_0043e7db(param_2);
  *param_1 = GuiApp::vftable;
  param_1[1] = GuiApp::vftable;
  param_1[9] = GuiApp::vftable;
  param_1[10] = GuiApp::vftable;
  param_1[0xef] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = SoeUtil::IString<char>::vftable;
  param_1[0xf7] = &DAT_01be1210;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0082d6e0(uVar1);
  local_4._0_1_ = 2;
  pvVar2 = Mem_Alloc(0x4c);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00825250();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xec] = uVar3;
  FUN_0083d410();
  FUN_008200c0();
  ExceptionList = local_c;
  return param_1;
}

