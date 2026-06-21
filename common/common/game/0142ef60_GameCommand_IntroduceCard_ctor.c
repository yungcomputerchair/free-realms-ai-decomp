// addr: 0x0142ef60
// name: GameCommand_IntroduceCard_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_IntroduceCard_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameCommand_IntroduceCard by initializing the base command,
                       setting its vtable, and zeroing introduce-card fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_IntroduceCard::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0141b3d0(param_2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

