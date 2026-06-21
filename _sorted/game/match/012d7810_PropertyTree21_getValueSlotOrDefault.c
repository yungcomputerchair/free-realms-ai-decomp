// addr: 0x012d7810
// name: PropertyTree21_getValueSlotOrDefault
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyTree21_getValueSlotOrDefault(void * tree, int key_) */

int __thiscall PropertyTree21_getValueSlotOrDefault(void *this,void *tree,int key_)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Returns the value slot for a property tree entry, or the default slot at
                       object+4 when the key is absent. It searches tree +0x14/+0x18 via
                       PropertyTree21_lowerBound. */
  PropertyTree21_lowerBound((void *)((int)this + 0x14),local_8,&tree,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)this + 0x18);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x14))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return iVar2 + 0x10;
  }
  return (int)this + 4;
}

