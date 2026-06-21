// addr: 0x00cf1ee0
// name: BaseItemDefinitionDataSource_handleItemAction
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool BaseItemDefinitionDataSource_handleItemAction(void * this, int action_,
   void * arg) */

bool __thiscall BaseItemDefinitionDataSource_handleItemAction(void *this,int action_,void *arg)

{
  int iVar1;
  void *pvVar2;
  
                    /* Looks up an item node from a BaseItemDefinitionDataSource and performs action
                       0 or 1 on it, dispatching to item helpers for inspect/select vs
                       argument-based action. Exact action names are unknown. */
  iVar1 = (**(code **)(*(int *)((int)this + 4) + 0x10))(action_);
  if (iVar1 != 0) {
    pvVar2 = GuiDataSourceRegistry_findBaseItemDefinitionDataSource
                       (DAT_01be1090,*(char **)((int)this + 0x228));
    if (pvVar2 != (void *)0x0) {
      iVar1 = FUN_00c92f20(iVar1);
      if (iVar1 != 0) {
        if (action_ == 0) {
          FUN_009969b0(iVar1);
        }
        else if (action_ == 1) {
          FUN_00cf18b0(iVar1,arg);
          return true;
        }
        return true;
      }
    }
  }
  return false;
}

