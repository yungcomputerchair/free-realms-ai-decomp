// addr: 0x01398ad0
// name: ActionCollection_ensureDefaultAction
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ActionCollection_ensureDefaultAction(void * this, void * actions, void *
   context) */

int __thiscall ActionCollection_ensureDefaultAction(void *this,void *actions,void *context)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* After invoking a virtual collection update, ensures a default action is
                       present when the action vector is empty, registering action id 0x2711 with
                       ActionDB and appending it. Returns success. */
  (**(code **)(*(int *)this + 0x118))(actions,context);
  iVar1 = *(int *)((int)actions + 4);
  if ((iVar1 == 0) || (*(int *)((int)actions + 8) - iVar1 >> 2 == 0)) {
    uVar3 = *(undefined4 *)((int)this + 0x5c);
    uVar2 = 0x2711;
    ActionDB_ensureSingleton();
    ActionDB_getAction(uVar2,uVar3);
    iVar1 = FUN_0137e030(&stack0x00000000);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

