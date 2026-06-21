// addr: 0x014d7160
// name: GameCommand_ValueList_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandValueList.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall GameCommand_ValueList_clone(int *param_1)

{
  uint uVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a new GameCommandValueList with the current mGame and copies this
                       command through the virtual clone/copy slot. Evidence is the mGame assert in
                       GameCommandValueList.cpp and the GameCommandValueList constructor call. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ad55b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)0x0;
  if (param_1[2] == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandValueList.cpp",0x2e);
  }
  this = Mem_Alloc(0x34);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    puVar2 = GameCommand_ValueList_ctor(this,(undefined4 *)param_1[2],uVar1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(puVar2);
  ExceptionList = this;
  return puVar2;
}

