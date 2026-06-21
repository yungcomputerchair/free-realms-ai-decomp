// addr: 0x01459af0
// name: CWGameCommand_SetupGame_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CWGameCommand_SetupGame_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor installs the CWGameCommand_SetupGame vtable, casts CTP::Game to
                       CWGame, and initializes setup flags from nearby game helpers.
                       Vtable/constructor shape identify the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c6b8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GameCommand_SetupGame_ctor(param_2);
  local_4 = 0;
  *param_1 = CWGameCommand_SetupGame::vftable;
  FUN_00d8d382(param_2,0,&CTP::Game::RTTI_Type_Descriptor,&CWGame::RTTI_Type_Descriptor,0,uVar1);
  uVar1 = FUN_01348ee0();
  param_1[0x21] = uVar1 & 0xff;
  uVar1 = FUN_01348ec0();
  param_1[0x20] = uVar1 & 0xff;
  ExceptionList = local_c;
  return param_1;
}

