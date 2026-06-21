// addr: 0x014b2080
// name: SynchronizationCommand_AddNonTradable_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_AddNonTradable_dump(int * param_1, void * param_2)
    */

void __thiscall SynchronizationCommand_AddNonTradable_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for SynchronizationCommand_AddNonTradable,
                       wrapping the SynchronizationCommand base dump between Starting/Ending
                       markers. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_AddNonTradable\n");
  SynchronizationCommand_ChangeFlags_serialize(this,(int)param_1);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_AddNonTradable\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

