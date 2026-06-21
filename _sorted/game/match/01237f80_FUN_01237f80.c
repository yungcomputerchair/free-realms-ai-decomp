// addr: 0x01237f80
// name: FUN_01237f80
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01237fa9) */
/* Setting prototype: void dispatch_vector_virtual_0c(int this_, undefined4 arg1_, undefined4 arg2_,
   undefined4 arg3_) */

void __thiscall
dispatch_vector_virtual_0c(void *this,int this_,undefined4 arg1_,undefined4 arg2_,undefined4 arg3_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Iterates the pointer range stored at this+0x40..this+0x44, checks vector
                       bounds before each access, and for each non-null object calls its virtual
                       method at vtable offset 0x0c with the three arguments. Class identity is not
                       evident from strings/callers in this context. */
  piVar2 = *(int **)((int)this + 0x40);
  if (*(int **)((int)this + 0x44) < piVar2) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar1 = *(int **)((int)this + 0x44);
    if (piVar1 < *(int **)((int)this + 0x40)) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (*(int **)((int)this + 0x44) <= piVar2) {
      FUN_00d83c2d();
    }
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0xc))(this_,arg1_,arg2_);
    }
    if (*(int **)((int)this + 0x44) <= piVar2) {
      FUN_00d83c2d();
    }
    piVar2 = piVar2 + 1;
  }
  return;
}

