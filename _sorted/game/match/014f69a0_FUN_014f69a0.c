// addr: 0x014f69a0
// name: FUN_014f69a0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool intersects_member_int_vector(int this_, int otherVector_) */

bool __thiscall intersects_member_int_vector(void *this,int this_,int otherVector_)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_c;
  
                    /* Returns true if any int in otherVector is present in the member int vector at
                       this+0x34..this+0x38. It performs checked iteration over both vectors but has
                       no class-identifying evidence. */
  piVar1 = *(int **)(this_ + 8);
  if (piVar1 < *(int **)(this_ + 4)) {
    FUN_00d83c2d();
  }
  local_c = *(int **)(this_ + 4);
  if (*(int **)(this_ + 8) < local_c) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this_ == 0) {
      FUN_00d83c2d();
    }
    if (local_c == piVar1) {
      return false;
    }
    if (this_ == 0) {
      FUN_00d83c2d();
    }
    if (*(int **)(this_ + 8) <= local_c) {
      FUN_00d83c2d();
    }
    iVar2 = *local_c;
    piVar3 = *(int **)((int)this + 0x38);
    if (piVar3 < *(int **)((int)this + 0x34)) {
      FUN_00d83c2d();
    }
    piVar4 = *(int **)((int)this + 0x34);
    if (*(int **)((int)this + 0x38) < piVar4) {
      FUN_00d83c2d();
    }
    for (; (piVar4 != piVar3 && (*piVar4 != iVar2)); piVar4 = piVar4 + 1) {
    }
    piVar3 = *(int **)((int)this + 0x38);
    if (piVar3 < *(int **)((int)this + 0x34)) {
      FUN_00d83c2d();
    }
    if (this == (void *)0xffffffd0) {
      FUN_00d83c2d();
    }
    if (piVar4 != piVar3) break;
    if (*(int **)(this_ + 8) <= local_c) {
      FUN_00d83c2d();
    }
    local_c = local_c + 1;
  }
  return true;
}

