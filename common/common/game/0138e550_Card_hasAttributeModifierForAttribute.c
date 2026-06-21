// addr: 0x0138e550
// name: Card_hasAttributeModifierForAttribute
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasAttributeModifierForAttribute(void * this) */

bool __fastcall Card_hasAttributeModifierForAttribute(void *this)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 local_8;
  int iStack_4;
  
                    /* Checks whether any attribute modifier in the current vector has the same
                       attribute id requested via a virtual call; returns true on match. */
  local_8 = 0;
  (**(code **)(*(int *)this + 0x214))(0x165,&local_8);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 < *(undefined4 **)(unaff_EBP + 4)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 4);
  if (*(undefined4 **)(unaff_EBP + 8) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (unaff_EBP == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) {
      return false;
    }
    if (unaff_EBP == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(unaff_EBP + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    iVar2 = AttributeModifier_getAttributeID((void *)*puVar3);
    if (iStack_4 == iVar2) break;
    if (*(undefined4 **)(unaff_EBP + 8) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return true;
}

