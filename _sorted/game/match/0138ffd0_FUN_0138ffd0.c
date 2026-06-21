// addr: 0x0138ffd0
// name: FUN_0138ffd0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void dispatchOverListValues180(void * thisObj, undefined4 arg1_, undefined4
   arg2_) */

void __thiscall
dispatchOverListValues180(void *this,void *thisObj,undefined4 arg1_,undefined4 arg2_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Iterates list nodes at object+0xc4 and invokes virtual method +0x180 on this
                       object for each node's value with two supplied arguments. */
  piVar1 = *(int **)((int)this + 0xc4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xffffff40) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xffffff40) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0xc4)) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)this + 0x180))(piVar2[3],thisObj,arg1_);
    FUN_0138cca0();
  }
  return;
}

