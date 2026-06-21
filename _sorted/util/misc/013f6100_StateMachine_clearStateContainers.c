// addr: 0x013f6100
// name: StateMachine_clearStateContainers
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_clearStateContainers(void * this) */

void __fastcall StateMachine_clearStateContainers(void *this)

{
                    /* Clears/destructs the StateMachine-owned containers at offsets +8 and +0x18,
                       likely during state-machine teardown. */
  FUN_013f5410((int)this + 8);
  FUN_013f5a40((int)this + 0x18);
  return;
}

