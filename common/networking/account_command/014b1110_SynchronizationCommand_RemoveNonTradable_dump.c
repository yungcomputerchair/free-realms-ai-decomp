// addr: 0x014b1110
// name: SynchronizationCommand_RemoveNonTradable_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveNonTradable_dump(int * param_1, void *
   param_2) */

void __thiscall SynchronizationCommand_RemoveNonTradable_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for SynchronizationCommand_RemoveNonTradable,
                       wrapping the SynchronizationCommand base dump between Starting/Ending
                       markers. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_RemoveNonTradable\n");
  SynchronizationCommand_ChangeFlags_serialize(this,(int)param_1);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_RemoveNonTradable\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

