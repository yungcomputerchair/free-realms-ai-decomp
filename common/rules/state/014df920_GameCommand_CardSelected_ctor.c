// addr: 0x014df920
// name: GameCommand_CardSelected_ctor
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall GameCommand_CardSelected_ctor(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_CardSelected by running the base GameCommand
                       constructor, installing the GameCommand_CardSelected vtable, clearing card
                       fields, and storing a game flag. Evidence is vtable name and
                       createAndRegister caller. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aefb8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  GameCommand_ctor(param_1);
  local_4 = 0;
  *param_1 = GameCommand_CardSelected::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0141b3d0(param_2);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  uVar1 = FUN_01348870(uVar2);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  ExceptionList = local_c;
  return param_1;
}

