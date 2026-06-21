// addr: 0x014ad0f0
// name: SynchronizationCommand_UnlockTournament_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_UnlockTournament_dump(int * param_1, void *
   param_2) */

void __thiscall SynchronizationCommand_UnlockTournament_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for SynchronizationCommand_UnlockTournament,
                       wrapping the SynchronizationCommand base dump between Starting/Ending
                       markers. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_UnlockTournament\n");
  SynchronizationCommand_ChangeFlags_serialize(this,(int)param_1);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_UnlockTournament\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

