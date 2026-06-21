// addr: 0x01322070
// name: FUN_01322070
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_commandObject_setOpcode8(void * commandObject) */

void __fastcall unknown_commandObject_setOpcode8(void *commandObject)

{
                    /* Calls the virtual method at vtable offset 0x50 with constant 8, likely
                       setting/emitting a command/action code. */
  (**(code **)(*(int *)commandObject + 0x50))(8);
  return;
}

