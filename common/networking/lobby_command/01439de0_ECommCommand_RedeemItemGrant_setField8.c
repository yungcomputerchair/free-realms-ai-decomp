// addr: 0x01439de0
// name: ECommCommand_RedeemItemGrant_setField8
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_setField8(void * this, int value) */

void __thiscall ECommCommand_RedeemItemGrant_setField8(void *this,int value)

{
                    /* Sets the 32-bit field at offset 8 on an ECommCommand_RedeemItemGrant object.
                        */
  *(int *)((int)this + 8) = value;
  return;
}

