// addr: 0x014d7940
// name: GameCommand_SynchPoint_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSynchPoint.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall GameCommand_SynchPoint_clone(int *param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a new GameCommandSynchPoint bound to this->mGame and copies state
                       using the virtual clone/copy method. Evidence is the mGame assert in
                       GameCommandSynchPoint.cpp and constructor call. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ad68b;
  local_c = ExceptionList;
  piVar1 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)0x0;
  if (param_1[2] == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSynchPoint.cpp",0x30);
  }
  this = Mem_Alloc(0x3c);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    puVar2 = GameCommand_SynchPoint_ctor(this,(undefined4 *)param_1[2],piVar1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(puVar2);
  ExceptionList = this;
  return puVar2;
}

