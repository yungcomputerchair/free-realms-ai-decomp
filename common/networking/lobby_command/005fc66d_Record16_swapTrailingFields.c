// addr: 0x005fc66d
// name: Record16_swapTrailingFields
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Record16_swapTrailingFields(void * left, void * right) */

void __thiscall Record16_swapTrailingFields(void *this,void *left,void *right)

{
  undefined4 uVar1;
  
                    /* Swaps the three 32-bit fields at offsets 4, 8, and 0xc between two 16-byte
                       records, leaving the first field untouched. */
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)left + 4);
  *(undefined4 *)((int)left + 4) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)left + 8);
  *(undefined4 *)((int)left + 8) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)left + 0xc);
  *(undefined4 *)((int)left + 0xc) = uVar1;
  return;
}

