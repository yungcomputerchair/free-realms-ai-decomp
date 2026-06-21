// addr: 0x01391630
// name: Card_removeActionOriginPair
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_removeActionOriginPair(void * card, int actionId_, int originId_) */

void __thiscall Card_removeActionOriginPair(void *this,void *card,int actionId_,int originId_)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_8 [4];
  int *local_4;
  
                    /* Searches the vector at card+0xb0 for a two-int action/origin pair and erases
                       the matching entry if present. */
  piVar1 = *(int **)((int)this + 0xb8);
  if (piVar1 < *(int **)((int)this + 0xb4)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0xb4);
  piVar3 = piVar2;
  if (*(int **)((int)this + 0xb8) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar3 != piVar1 && (((void *)*piVar3 != card || (piVar3[1] != actionId_))));
      piVar3 = piVar3 + 2) {
  }
  piVar1 = *(int **)((int)this + 0xb8);
  local_4 = piVar2;
  if (piVar1 < *(int **)((int)this + 0xb4)) {
    FUN_00d83c2d();
  }
  if ((int)this + 0xb0 == 0) {
    FUN_00d83c2d();
  }
  if (piVar3 != piVar1) {
    FUN_0123ab90(local_8,(int)this + 0xb0,piVar3);
  }
  return;
}

