// addr: 0x013915a0
// name: FUN_013915a0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void removePairFromObjectVector(int object_, int first_, int second_) */

void __thiscall removePairFromObjectVector(void *this,int object_,int first_,int second_)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_8 [4];
  int *local_4;
  
                    /* Removes a pair of 4-byte values from a vector at object+0x108 if that exact
                       pair exists. */
  piVar1 = *(int **)((int)this + 0x10c);
  if (piVar1 < *(int **)((int)this + 0x108)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0x108);
  piVar3 = piVar2;
  if (*(int **)((int)this + 0x10c) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar3 != piVar1 && ((*piVar3 != object_ || (piVar3[1] != first_)))); piVar3 = piVar3 + 2)
  {
  }
  piVar1 = *(int **)((int)this + 0x10c);
  local_4 = piVar2;
  if (piVar1 < *(int **)((int)this + 0x108)) {
    FUN_00d83c2d();
  }
  if ((int)this + 0x104 == 0) {
    FUN_00d83c2d();
  }
  if (piVar3 != piVar1) {
    FUN_0123ab90(local_8,(int)this + 0x104,piVar3);
  }
  return;
}

