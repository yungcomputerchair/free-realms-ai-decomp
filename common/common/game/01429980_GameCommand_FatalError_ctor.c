// addr: 0x01429980
// name: GameCommand_FatalError_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_FatalError_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_FatalError by running the GameCommand base
                       constructor, installing the FatalError vtable, constructing the embedded
                       Exception, zeroing fields, and forwarding the argument to a base/common
                       initializer. Evidence: GameCommand_FatalError::vftable and callers
                       send/handle exception. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016956c3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_FatalError::vftable;
  Exception_ctor(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  FUN_0141b3d0(param_2);
  ExceptionList = local_c;
  return param_1;
}

