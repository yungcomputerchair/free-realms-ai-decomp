// addr: 0x01439e70
// name: ECommCommand_RedeemItemGrant_setFlag1c
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_setFlag1c(void * this, int flag) */

void __thiscall ECommCommand_RedeemItemGrant_setFlag1c(void *this,int flag)

{
                    /* Sets the byte flag at offset 0x1c on an ECommCommand_RedeemItemGrant object.
                        */
  *(undefined1 *)((int)this + 0x1c) = (undefined1)flag;
  return;
}

