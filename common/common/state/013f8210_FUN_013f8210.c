// addr: 0x013f8210
// name: FUN_013f8210
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_013f8210(int param_1)

{
  uint uVar1;
  undefined1 local_a0 [144];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f93b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff5c;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc);
  EvaluationEnvironment_ctor(uVar1);
  local_4 = 0;
  EvaluationEnvironment_setGame(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 4) + 400))(local_a0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_10;
  return;
}

