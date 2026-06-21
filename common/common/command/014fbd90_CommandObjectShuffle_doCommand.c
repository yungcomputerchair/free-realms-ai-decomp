// addr: 0x014fbd90
// name: CommandObjectShuffle_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectShuffle.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectShuffle_doCommand(void * this) */

bool __fastcall CommandObjectShuffle_doCommand(void *this)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  
                    /* Executes a shuffle command for the player's selected play area, with a
                       special case for area id 6; logs and fails if the play area cannot be found.
                        */
  if (*(int *)((int)this + 0x128) == 0) {
    FUN_012f5a60("mPlayer","..\\common\\common\\command\\CommandObjectShuffle.cpp",0x2e);
  }
  piVar2 = (int *)PlayElement_getGame();
  if (*(int *)((int)this + 0x124) != 6) {
    pvVar3 = (void *)(**(code **)(*piVar2 + 0x48))
                               (*(int *)((int)this + 0x124),(void *)((int)this + 0x84));
    if (pvVar3 != (void *)0x0) {
      bVar1 = CommandObjectShuffle_doShuffle(pvVar3);
      return bVar1;
    }
    EvaluationEnvironment_tracef
              ((void *)((int)this + 0x84),"Couldn\'t get playArea for shuffle %d",
               *(undefined4 *)((int)this + 0x124));
    return false;
  }
  pvVar3 = (void *)FUN_0139d7a0();
  bVar1 = CommandObjectShuffle_doShuffle(pvVar3);
  return bVar1;
}

