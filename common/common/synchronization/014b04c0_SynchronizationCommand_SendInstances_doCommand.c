// addr: 0x014b04c0
// name: SynchronizationCommand_SendInstances_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_SendInstances_doCommand(void * this) */

uint __fastcall SynchronizationCommand_SendInstances_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes a SendInstances command by forwarding collection/account fields and
                       embedded add/remove instance vectors to the service handler. */
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleSendInstances
            (this_00,*(uint *)((int)this + 4),*(uint *)((int)this + 8),*(int *)((int)this + 0xc),
             (void *)((int)this + 0x10),(void *)((int)this + 0x24));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

