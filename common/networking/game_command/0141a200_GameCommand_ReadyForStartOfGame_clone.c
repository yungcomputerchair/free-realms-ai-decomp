// addr: 0x0141a200
// name: GameCommand_ReadyForStartOfGame_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReadyForStartOfGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall GameCommand_ReadyForStartOfGame_clone(int *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a new ReadyForStartOfGame command using the current mGame and
                       invokes the virtual clone/copy slot to populate it before returning the new
                       command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016936ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = 0;
  if (param_1[2] == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandReadyForStartOfGame.cpp",
                 0x29,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  }
  pvVar1 = Mem_Alloc(0x24);
  uStack_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0141a120(param_1[2]);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(uVar2);
  ExceptionList = pvVar1;
  return uVar2;
}

