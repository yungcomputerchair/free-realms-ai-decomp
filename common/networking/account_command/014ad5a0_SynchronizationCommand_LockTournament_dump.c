// addr: 0x014ad5a0
// name: SynchronizationCommand_LockTournament_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_LockTournament_dump(int * param_1, void * param_2)
    */

void __thiscall SynchronizationCommand_LockTournament_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for SynchronizationCommand_LockTournament,
                       wrapping the SynchronizationCommand base dump between Starting/Ending
                       markers. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_LockTournament\n");
  SynchronizationCommand_ChangeFlags_serialize(this,(int)param_1);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_LockTournament\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

