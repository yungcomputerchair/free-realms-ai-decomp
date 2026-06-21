// addr: 0x014d8cb0
// name: GameCommand_SetPlayer_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSetPlayer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_SetPlayer_execute(void * this) */

int __fastcall GameCommand_SetPlayer_execute(void *this)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
                    /* Executes a set-player command: validates mGame, records the player id, and
                       when appropriate asks the game object to switch to that player via vtable
                       slot 0x1c4. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandSetPlayer.cpp",0x48);
  }
  GameCommand_execute(this);
  Game_setMyPlayerID(*(void **)((int)this + 8),*(int *)((int)this + 4));
  bVar1 = Game_getFlag_14d(*(void **)((int)this + 8));
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((!bVar1) && (iVar2 = *(int *)((int)this + 4), 2 < iVar2)) {
    iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x1c4))(iVar2);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

