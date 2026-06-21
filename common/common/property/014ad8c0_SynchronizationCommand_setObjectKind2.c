// addr: 0x014ad8c0
// name: SynchronizationCommand_setObjectKind2
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_setObjectKind2(void * self, void * value) */

void __thiscall SynchronizationCommand_setObjectKind2(void *this,void *self,void *value)

{
                    /* Stores a value at offset 0x18 and marks the discriminator at offset 0x1c as
                       2. It is the sibling of the kind-1 setter used by related synchronization
                       command constructors. */
  *(void **)((int)this + 0x18) = self;
  *(undefined4 *)((int)this + 0x1c) = 2;
  return;
}

