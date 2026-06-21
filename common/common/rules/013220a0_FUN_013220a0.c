// addr: 0x013220a0
// name: FUN_013220a0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_commandObject_setOpcode9(void * commandObject) */

void __fastcall unknown_commandObject_setOpcode9(void *commandObject)

{
                    /* Calls the virtual method at vtable offset 0x50 with constant 9, likely
                       setting/emitting a command/action code. */
  (**(code **)(*(int *)commandObject + 0x50))(9);
  return;
}

