// addr: 0x0138f4f0
// name: Card_checkModifierPredicate64
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_checkModifierPredicate64(void * this, void * context, int bucketId_)
    */

bool __thiscall Card_checkModifierPredicate64(void *this,void *context,int bucketId_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_8 [8];
  
                    /* For non-default contexts, looks up a modifier bucket and calls each modifier
                       virtual predicate at vtable+0x64 with the supplied object, failing if any
                       predicate returns false. */
  if (bucketId_ != 1) {
    iVar1 = *(int *)((int)this + 0x94);
    piVar6 = (int *)FUN_01323980(local_8,&bucketId_);
    iVar2 = *piVar6;
    iVar3 = piVar6[1];
    if ((iVar2 == 0) || (iVar2 != (int)this + 0x90)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar1) {
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      puVar7 = *(undefined4 **)(iVar3 + 0x14);
      if ((puVar7 != (undefined4 *)0x0) &&
         (puVar4 = *(undefined4 **)(iVar3 + 0x18), (int)puVar4 - (int)puVar7 >> 2 != 0)) {
        if (puVar4 < puVar7) {
          FUN_00d83c2d();
        }
        puVar7 = *(undefined4 **)(iVar3 + 0x14);
        if (*(undefined4 **)(iVar3 + 0x18) < puVar7) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (iVar3 == -0x10) {
            FUN_00d83c2d();
          }
          if (puVar7 == puVar4) break;
          if (iVar3 == -0x10) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar3 + 0x18) <= puVar7) {
            FUN_00d83c2d();
          }
          cVar5 = (**(code **)(*(int *)*puVar7 + 100))(context);
          if (cVar5 == '\0') {
            return false;
          }
          if (*(undefined4 **)(iVar3 + 0x18) <= puVar7) {
            FUN_00d83c2d();
          }
          puVar7 = puVar7 + 1;
        }
      }
    }
  }
  return true;
}

