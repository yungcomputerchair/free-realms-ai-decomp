// addr: 0x014e1810
// name: GameCommand_BeginCardPlayed_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandBeginCardPlayed.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char GameCommandBeginCardPlayed_doCommand(void * this) */

char __fastcall GameCommand_BeginCardPlayed_execute(void *this)

{
  char cVar1;
  void *unaff_EDI;
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes BeginCardPlayed by validating mGame, running common dispatch setup,
                       then calling a game callback with mPlayerID, the field at 0x24, a temporary
                       output structure, and a true flag. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016af618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandBeginCardPlayed.cpp",0x5b
                 ,DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  }
  GameCommand_execute(this);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_4 = 0;
  cVar1 = (**(code **)(**(int **)((int)this + 8) + 200))
                    (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24),&pvStack_1c,1)
  ;
  uStack_14 = 0xffffffff;
  if (unaff_EDI != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  ExceptionList = pvStack_1c;
  return cVar1;
}

