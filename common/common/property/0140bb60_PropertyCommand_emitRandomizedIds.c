// addr: 0x0140bb60
// name: PropertyCommand_emitRandomizedIds
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyCommand_emitRandomizedIds(bool useDefaultGenerator, void *
   command) */

void __thiscall PropertyCommand_emitRandomizedIds(void *this,bool useDefaultGenerator,void *command)

{
                    /* Chooses between two ID emission paths for a command-like object. If the first
                       flag is false and a command object is supplied it invokes FUN_0140a0c0;
                       otherwise it falls back to FUN_01409ee0, whose body emits randomized IDs
                       through vtable offset 100. */
  if ((!useDefaultGenerator) && (command != (void *)0x0)) {
    PropertyCommand_buildRandomizedDeckIds(this,command);
    return;
  }
  FUN_01409ee0();
  return;
}

