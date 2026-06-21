// addr: 0x014244c0
// name: GameCommand_OutOfCards_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_OutOfCards_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_OutOfCards by running base GameCommand
                       initialization, setting the vtable, and initializing common command fields.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_OutOfCards::vftable;
  FUN_0141b3d0(param_2);
  ExceptionList = local_c;
  return param_1;
}

