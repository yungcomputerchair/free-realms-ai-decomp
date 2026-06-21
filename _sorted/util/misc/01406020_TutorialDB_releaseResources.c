// addr: 0x01406020
// name: TutorialDB_releaseResources
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TutorialDB_releaseResources(void * this, int freeMode_) */

void __thiscall TutorialDB_releaseResources(void *this,int freeMode_)

{
                    /* Releases TutorialDB-owned resources: destroys the primary allocation, clears
                       an internal container, and releases three referenced objects. */
  if (*(int *)((int)this + 4) != 0) {
    FUN_01514ed0(*(int *)((int)this + 4),freeMode_);
    *(undefined4 *)((int)this + 4) = 0;
  }
  CardFormula_clearObjectTree(this);
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(undefined4 **)((int)this + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x3c))(1);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  if (*(undefined4 **)((int)this + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x40))(1);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return;
}

