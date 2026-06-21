// addr: 0x013b3aa0
// name: MatchCommand_SetReady_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetReady_dump(int * param_1, void * param_2) */

void __thiscall MatchCommand_SetReady_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for MatchCommand_SetReady, including MatchCommand
                       base state and the Ready flag. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting MatchCommand_SetReady\n");
  MatchCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Ready: ");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Ending MatchCommand_SetReady\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

