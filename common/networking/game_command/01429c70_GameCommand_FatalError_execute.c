// addr: 0x01429c70
// name: GameCommand_FatalError_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandFatalError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_FatalError_execute(void * this) */

int __fastcall GameCommand_FatalError_execute(void *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX;
  
                    /* Executes a fatal-error command after mGame validation, dispatching the stored
                       error text through one of two handlers depending on current mode. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandFatalError.cpp",0x4a);
  }
  GameCommand_execute(this);
  bVar1 = Game_getFlag_14d(*(void **)((int)this + 8));
  if (bVar1) {
    uVar2 = Game_handleException((int)this + 0x24);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  Game_sendExceptionToPlayer(*(void **)((int)this + 8),(void *)((int)this + 0x24));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

