// addr: 0x014aece0
// name: SynchronizationCommand_StartDelivery_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SynchronizationCommand_StartDelivery_doCommand(void * this) */

uint __fastcall SynchronizationCommand_StartDelivery_doCommand(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  
                    /* Executes a StartDelivery command by forwarding its scalar fields and embedded
                       add/remove vectors to the synchronization service. */
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleStartDelivery
            (this_00,*(uint *)((int)this + 8),*(uint *)((int)this + 4),*(uint *)((int)this + 0x34),
             *(bool *)((int)this + 0x38),*(uint *)((int)this + 0xc),(void *)((int)this + 0x10),
             *(uint *)((int)this + 0x2c),*(uint *)((int)this + 0x30),(void *)((int)this + 0x3c),
             (void *)((int)this + 0x4c));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

