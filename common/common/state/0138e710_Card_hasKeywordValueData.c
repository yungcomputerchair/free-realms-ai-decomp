// addr: 0x0138e710
// name: Card_hasKeywordValueData
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasKeywordValueData(void * this, void * valueData) */

bool __thiscall Card_hasKeywordValueData(void *this,void *valueData)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *puVar5;
  
                    /* Tests whether a card has a keyword specified by an integer ValueData or any
                       keyword from an integer-list ValueData; logs unsupported ValueData types. */
  iVar1 = *(int *)((int)valueData + 4);
  if (iVar1 == 2) {
    uVar3 = (**(code **)(*(int *)this + 0x1c0))(*(undefined4 *)((int)valueData + 8));
    return (bool)uVar3;
  }
  if (iVar1 == 6) {
    iVar1 = *(int *)((int)valueData + 8);
    puVar2 = *(undefined4 **)(iVar1 + 8);
    if (puVar2 < *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    puVar5 = *(undefined4 **)(iVar1 + 4);
    if (*(undefined4 **)(iVar1 + 8) < puVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar2) {
        return false;
      }
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      cVar4 = (**(code **)(*(int *)this + 0x1c0))(*puVar5);
      if (cVar4 != '\0') break;
      if (*(undefined4 **)(iVar1 + 8) <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    return true;
  }
  Game_logGeneral(*(void **)((int)this + 0x30),"Card.hasKeyword(valueData) can\'t get type! %d",
                  iVar1);
  return false;
}

