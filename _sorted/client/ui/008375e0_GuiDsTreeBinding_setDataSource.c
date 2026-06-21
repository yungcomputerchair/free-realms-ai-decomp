// addr: 0x008375e0
// name: GuiDsTreeBinding_setDataSource
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsTreeBinding_setDataSource(void * this, void * dataSource) */

void __thiscall GuiDsTreeBinding_setDataSource(void *this,void *dataSource)

{
  int *piVar1;
  int *piVar2;
  
                    /* Casts a GuiDataSource to GuiDsTree, releases any previous tree source,
                       addrefs the new one, updates a bound tree control, populates it from the root
                       node, and refreshes layout. Clears the control when the source is null or
                       invalid. */
  if ((dataSource == (void *)0x0) ||
     (piVar2 = (int *)FUN_00d8d382(dataSource,0,&GuiDataSource::RTTI_Type_Descriptor,
                                   &GuiDsTree::RTTI_Type_Descriptor,0), piVar2 == (int *)0x0)) {
    if ((*(int *)((int)this + 0x1c) != 0) && (*(int *)((int)this + 0x40) != 0)) {
      FUN_00627e46(0);
      *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x40) = 0;
      FUN_00627e46(*(undefined4 *)((int)this + 0x1c));
      FUN_00836480();
      return;
    }
    return;
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 == piVar2) {
    return;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)this + 0x14))(piVar1);
  }
  *(int **)((int)this + 0x18) = piVar2;
  (**(code **)(*piVar2 + 8))(-(uint)(this != (void *)0x110) & (uint)this);
  if (*(int *)((int)this + 0x1c) == 0) {
    return;
  }
  if (*(int *)((int)this + 0x40) == 0) {
    return;
  }
  FUN_00627e46(0);
  *(int **)(*(int *)((int)this + 0x1c) + 0x40) = piVar2;
  FUN_00627e46(*(undefined4 *)((int)this + 0x1c));
  GuiTreeCtrl_onDataSourceRowsChanged
            (*(void **)((int)this + 0x40),1,piVar2[0xc],0,0,*(int *)(piVar2[0xc] + 0x10),(void *)0x1
             ,(void *)0x0,(void *)0x0,false);
  FUN_00836480();
  return;
}

