// addr: 0x01515f70
// name: Engine_FRTWArchetypeView_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_FRTWArchetypeView_ctor(undefined4 *param_1)

{
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::FRTWArchetypeView, installs its vftable, then registers a
                       fixed list of archetype/property ids. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  Engine_ArchetypeViewBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  *param_1 = Engine::FRTWArchetypeView::vftable;
  local_14 = 1;
  FUN_0042c155(&local_14);
  local_14 = 0x276;
  FUN_0042c155(&local_14);
  local_14 = 0x1c;
  FUN_0042c155(&local_14);
  local_14 = 2;
  FUN_0042c155(&local_14);
  local_14 = 5;
  FUN_0042c155(&local_14);
  local_14 = 0x48;
  FUN_0042c155(&local_14);
  local_14 = 0x49;
  FUN_0042c155(&local_14);
  local_14 = 0x4a;
  FUN_0042c155(&local_14);
  local_14 = 0x4c;
  FUN_0042c155(&local_14);
  local_14 = 0x229f8;
  FUN_0042c155(&local_14);
  local_14 = 0x229e9;
  FUN_0042c155(&local_14);
  local_14 = 0x240;
  FUN_0042c155(&local_14);
  local_14 = 0x283;
  FUN_0042c155(&local_14);
  local_14 = 0x31d;
  FUN_0042c155(&local_14);
  local_14 = 0x103a;
  FUN_0042c155(&local_14);
  local_14 = 0x47c;
  FUN_0042c155(&local_14);
  local_14 = 300;
  FUN_0042c155(&local_14);
  local_14 = 0x239;
  FUN_0042c155(&local_14);
  local_14 = 0xfc7;
  FUN_0042c155(&local_14);
  local_14 = 0xff6;
  FUN_0042c155(&local_14);
  local_14 = 0xff7;
  FUN_0042c155(&local_14);
  local_14 = 0xff8;
  FUN_0042c155(&local_14);
  local_14 = 0x1066;
  FUN_0042c155(&local_14);
  local_14 = 0x106a;
  FUN_0042c155(&local_14);
  local_14 = 0x1089;
  FUN_0042c155(&local_14);
  local_14 = 0x22974;
  FUN_0042c155(&local_14);
  local_14 = 0x22973;
  FUN_0042c155(&local_14);
  local_14 = 0x22972;
  FUN_0042c155(&local_14);
  ExceptionList = local_c;
  return param_1;
}

