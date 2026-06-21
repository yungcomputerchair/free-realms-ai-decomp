// addr: 0x01398b30
// name: Card_clearAttachedModifiers
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_clearAttachedModifiers(void * this) */

void __fastcall Card_clearAttachedModifiers(void *this)

{
                    /* Clears several card fields, walks/removes modifier references through
                       FUN_01411540, then frees and resets a tree/vector at +0x94. The exact member
                       name is inferred from modifier-removal behavior. */
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  Card_clearActionReferencesToElement((void *)((int)this + 0x48),this);
  FUN_01324fa0(*(undefined4 *)(*(int *)((int)this + 0x94) + 4));
  *(int *)(*(int *)((int)this + 0x94) + 4) = *(int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x94);
  *(int *)(*(int *)((int)this + 0x94) + 8) = *(int *)((int)this + 0x94);
  return;
}

