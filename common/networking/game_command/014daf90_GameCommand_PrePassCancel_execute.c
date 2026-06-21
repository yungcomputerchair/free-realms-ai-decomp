// addr: 0x014daf90
// name: GameCommand_PrePassCancel_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandPrePassCancel.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandPrePassCancel_doCommand(void * this) */

int __fastcall GameCommand_PrePassCancel_execute(void *this)

{
  undefined4 uVar1;
  int in_EDX;
  int extraout_EDX;
  
                    /* Executes a PrePassCancel command by validating mGame, touching/validating the
                       player id at +0x4, and sending the text command 'cancelprepass %d' to the
                       game. Evidence is the format string and GameCommandPrePassCancel.cpp path. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandPrePassCancel.cpp",0x1a);
    in_EDX = extraout_EDX;
  }
  RefCountMap_releaseKey(*(void **)((int)this + 8),in_EDX);
  uVar1 = Game_writeGameLog(*(undefined4 *)((int)this + 8),"cancelprepass\t%d",
                            *(undefined4 *)((int)this + 4));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

