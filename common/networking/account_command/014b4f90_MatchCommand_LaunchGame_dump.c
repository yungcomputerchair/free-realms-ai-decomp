// addr: 0x014b4f90
// name: MatchCommand_LaunchGame_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_LaunchGame_dump(int * param_1, void * param_2) */

void __thiscall MatchCommand_LaunchGame_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for MatchCommand_LaunchGame, wrapping the
                       MatchCommand base dump between Starting/Ending markers. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting MatchCommand_LaunchGame\n");
  MatchCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Ending MatchCommand_LaunchGame\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

