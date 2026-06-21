// addr: 0x01429530
// name: GameCommand_OutOfSync_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_OutOfSync_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameCommand_OutOfSync and logs that an out-of-sync command is
                       being pushed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695598;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_OutOfSync::vftable;
  FUN_0141b3d0(param_2);
  Game_logGeneral((void *)param_1[2],"Pushing OUT OF SYNC.",uVar1);
  ExceptionList = local_c;
  return param_1;
}

