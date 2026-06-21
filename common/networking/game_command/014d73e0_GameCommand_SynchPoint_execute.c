// addr: 0x014d73e0
// name: GameCommand_SynchPoint_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSynchPoint.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_SynchPoint_execute(void * this) */

int __fastcall GameCommand_SynchPoint_execute(void *this)

{
  undefined1 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  
                    /* Executes a synch-point command after asserting mGame, invoking the game
                       vtable method at 0x100 with the player id and clearing/updating the command's
                       pending state when not in replay/simulation mode. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSynchPoint.cpp",0x25);
  }
  GameCommand_execute(this);
  uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x100))(*(undefined4 *)((int)this + 4));
  bVar2 = Game_getFlag_14d(*(void **)((int)this + 8));
  uVar3 = extraout_var;
  if (!bVar2) {
    GameCommand_SynchPoint_noop();
    uVar3 = extraout_var_00;
  }
  return CONCAT31(uVar3,uVar1);
}

