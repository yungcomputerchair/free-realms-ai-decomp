// addr: 0x013fa1c0
// name: FUN_013fa1c0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 lookup_virtual_key_in_member_map(int * this) */

undefined4 __fastcall lookup_virtual_key_in_member_map(int *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_c;
  undefined1 auStack_8 [8];
  
                    /* Calls virtual method at vtable offset 0x3c to obtain a key, looks that key up
                       in the map-like member at this+0x1c, and returns the found node's value at
                       +0x10 or 0 if absent. Class identity is not evident. */
  iVar1 = this[8];
  uStack_c = (**(code **)(*this + 0x3c))();
  piVar4 = (int *)FUN_013f9d10(auStack_8,&uStack_c);
  piVar2 = (int *)*piVar4;
  iVar3 = piVar4[1];
  if ((piVar2 == (int *)0x0) || (piVar2 != this + 7)) {
    FUN_00d83c2d();
  }
  if (iVar3 == iVar1) {
    return 0;
  }
  if (piVar2 == (int *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar3 == piVar2[1]) {
    FUN_00d83c2d();
  }
  return *(undefined4 *)(iVar3 + 0x10);
}

