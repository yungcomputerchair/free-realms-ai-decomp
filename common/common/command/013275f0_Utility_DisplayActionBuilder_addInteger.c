// addr: 0x013275f0
// name: Utility_DisplayActionBuilder_addInteger
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Utility_DisplayActionBuilder_addInteger(void * this, int value) */

void __fastcall Utility_DisplayActionBuilder_addInteger(void *this,int value)

{
  int in_stack_00000004;
  
                    /* Adds an integer ValueData argument to a DisplayActionBuilder if the builder
                       has an active display-action object. */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    DisplayActionBuilder_addIntArg(*(void **)((int)this + 4),in_stack_00000004);
    return;
  }
  return;
}

