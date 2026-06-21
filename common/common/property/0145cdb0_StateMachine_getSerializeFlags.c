// addr: 0x0145cdb0
// name: StateMachine_getSerializeFlags
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint StateMachine_getSerializeFlags(void * this) */

uint __fastcall StateMachine_getSerializeFlags(void *this)

{
                    /* Returns the StateMachine field at offset 0xec, used by StateMachine_serialize
                       and a nearby state-machine helper. */
  return *(uint *)((int)this + 0xec);
}

