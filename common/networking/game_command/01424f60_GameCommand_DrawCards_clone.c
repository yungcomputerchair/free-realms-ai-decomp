// addr: 0x01424f60
// name: GameCommand_DrawCards_clone
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDrawCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall GameCommand_DrawCards_clone(int *param_1)

{
  void *this;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a new DrawCards command with the current mGame, then invokes the
                       virtual clone/copy slot to populate it and returns the clone. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01694fcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)0x0;
  if (param_1[2] == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandDrawCards.cpp",0x4d,
                 DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  }
  this = Mem_Alloc(0x48);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    pvVar1 = GameCommand_DrawCards_ctorFromSource(this,(void *)param_1[2]);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar1);
  ExceptionList = this;
  return pvVar1;
}

