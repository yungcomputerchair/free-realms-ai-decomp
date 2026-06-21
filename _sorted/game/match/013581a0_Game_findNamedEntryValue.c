// addr: 0x013581a0
// name: Game_findNamedEntryValue
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_findNamedEntryValue(void * this, void * name) */

int __thiscall Game_findNamedEntryValue(void *this,void *name)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Looks up a named game object/entry in a string-keyed table at Game+0x31c and
                       returns the value stored at node+0x28, or 0 if absent. */
  findStringKeyedEntry((void *)((int)this + 0x31c),(int)local_8,name,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)((int)this + 800);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 0x31c))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(int *)(iVar2 + 0x28);
  }
  return 0;
}

