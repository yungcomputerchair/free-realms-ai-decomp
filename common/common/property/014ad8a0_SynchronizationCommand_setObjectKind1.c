// addr: 0x014ad8a0
// name: SynchronizationCommand_setObjectKind1
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_setObjectKind1(void * self, void * value) */

void __thiscall SynchronizationCommand_setObjectKind1(void *this,void *self,void *value)

{
                    /* Stores a value at offset 0x18 and marks the discriminator at offset 0x1c as
                       1. Constructors for SynchronizationCommand_LockTournament call it after
                       installing their vftable. */
  *(void **)((int)this + 0x18) = self;
  *(undefined4 *)((int)this + 0x1c) = 1;
  return;
}

