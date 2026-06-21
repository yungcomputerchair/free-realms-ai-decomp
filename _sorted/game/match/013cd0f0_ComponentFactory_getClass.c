// addr: 0x013cd0f0
// name: ComponentFactory_getClass
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ComponentFactory_getClass(void * this, int classId_) */

void * __thiscall ComponentFactory_getClass(void *this,int classId_)

{
  int iVar1;
  void *pvVar2;
  int local_8;
  int local_4;
  
                    /* Looks up a registered class/factory by numeric class id and invokes its
                       getter at vtable/slot +0xc. Logs "Couldn't get class %d" and returns 0 when
                       not registered. */
  FUN_013ccca0(&local_8,&classId_);
  iVar1 = *(int *)((int)this + 0xc);
  if ((int)this + 8 != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 == local_4) {
    FUN_012f5dc0("Couldn\'t get class %d",classId_);
    return (void *)0x0;
  }
  if (local_8 == 0) {
    FUN_00d83c2d();
  }
  if (local_4 == *(int *)(local_8 + 4)) {
    FUN_00d83c2d();
  }
  pvVar2 = (void *)(**(code **)(local_4 + 0xc))();
  return pvVar2;
}

