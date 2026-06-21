// addr: 0x012e4e40
// name: FUN_012e4e40
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012e4e85) */
/* Setting prototype: void dispatch_vector_virtual_08(int this_, undefined4 arg_) */

void __thiscall dispatch_vector_virtual_08(void *this,int this_,undefined4 arg_)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* Iterates the non-empty pointer vector at this+8..this+0xc, increments a
                       reentrancy/depth counter at this+0x14, and invokes each element's virtual
                       method at vtable offset 8 with arg. Class identity is not evident from the
                       available context. */
  if ((*(int *)((int)this + 8) != 0) &&
     (*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2 != 0)) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    puVar2 = *(undefined4 **)((int)this + 8);
    if (*(undefined4 **)((int)this + 0xc) < puVar2) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar1 = *(undefined4 **)((int)this + 0xc);
      if (puVar1 < *(undefined4 **)((int)this + 8)) {
        FUN_00d83c2d();
      }
      if (puVar2 == puVar1) break;
      if (*(undefined4 **)((int)this + 0xc) <= puVar2) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar2 + 8))(this_);
      if (*(undefined4 **)((int)this + 0xc) <= puVar2) {
        FUN_00d83c2d();
      }
      puVar2 = puVar2 + 1;
    }
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
  }
  return;
}

