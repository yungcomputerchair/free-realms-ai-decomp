// addr: 0x013aff20
// name: Engine_LobbyViewBase_init
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Engine_LobbyViewBase_init(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructor/initializer for Engine::LobbyViewBase; sets the
                       Engine::LobbyViewBase vftable and initializes lobby view subcomponents. */
  puStack_8 = &LAB_016870db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::LobbyViewBase::vftable;
  local_4 = 4;
  FUN_0143d0b0(uVar1);
  local_4._0_1_ = 3;
  Engine_PageFilter_dtor(param_1 + 0x3c);
  local_4._0_1_ = 2;
  Engine_Filter_dtor(param_1 + 0x23);
  local_4._0_1_ = 1;
  Engine_MatchView_dtor();
  local_4 = (uint)local_4._1_3_ << 8;
  Engine_PageFilter_dtor(param_1 + 0x1a);
  local_4 = 0xffffffff;
  Engine_Filter_dtor(param_1 + 1);
  ExceptionList = local_c;
  return;
}

