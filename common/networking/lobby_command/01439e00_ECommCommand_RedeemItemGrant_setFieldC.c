// addr: 0x01439e00
// name: ECommCommand_RedeemItemGrant_setFieldC
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_setFieldC(void * this, int value) */

void __thiscall ECommCommand_RedeemItemGrant_setFieldC(void *this,int value)

{
                    /* Sets the 32-bit field at offset 0xc on an ECommCommand_RedeemItemGrant
                       object. */
  *(int *)((int)this + 0xc) = value;
  return;
}

