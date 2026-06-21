// addr: 0x00fac260
// name: GraphicsDriver_CommandCall_ctorInBuffer
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GraphicsDriver_CommandCall_ctorInBuffer(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
                    /* Appends an 8-byte GraphicsDriver::CommandCall record into a command buffer,
                       sets its vtable, and stores the call argument. */
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + *(int *)(param_1 + 0x10));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = GraphicsDriver::CommandCall::vftable;
    puVar1[1] = param_2;
  }
  return;
}

