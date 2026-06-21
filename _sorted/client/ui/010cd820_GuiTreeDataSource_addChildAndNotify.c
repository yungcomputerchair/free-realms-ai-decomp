// addr: 0x010cd820
// name: GuiTreeDataSource_addChildAndNotify
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiTreeDataSource_addChildAndNotify(void * this, void * parent, void *
   child) */

void __thiscall GuiTreeDataSource_addChildAndNotify(void *this,void *parent,void *child)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint changeMask_;
  void *nodeId_;
  void *firstChild_;
  void *local_4;
  
                    /* Adds a child node to a tree data source (or sets the root when parent is
                       null), then notifies GuiTreeCtrl observers with either root-reset or
                       child-added events. Exact data-source subclass is unknown. */
  if (parent != (void *)0x0) {
    local_4 = *(void **)((int)parent + 0x10);
    FUN_010cd7d0(child);
  }
  else {
    *(void **)((int)this + 0x30) = child;
    local_4 = parent;
  }
  piVar2 = *(int **)((int)this + 0xc);
  piVar6 = (int *)0x0;
  while (piVar4 = piVar2, piVar4 != (int *)0x0) {
    piVar6 = piVar4;
    piVar2 = (int *)piVar4[3];
  }
  cVar1 = *(char *)((int)this + 0x34);
  while ((cVar1 != '\0' && (piVar6 != (int *)0x0))) {
    if ((*piVar6 != 0) &&
       (iVar5 = FUN_00d8d382(*piVar6,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                             &GuiTreeCtrl::RTTI_Type_Descriptor,0), iVar5 != 0)) {
      bVar3 = parent == (void *)0x0;
      if (bVar3) {
        firstChild_ = (void *)0x0;
        nodeId_ = (void *)0x0;
        changeMask_ = 1;
      }
      else {
        changeMask_ = 4;
        nodeId_ = parent;
        firstChild_ = local_4;
      }
      GuiTreeCtrl_onDataSourceRowsChanged
                (*(void **)(iVar5 + 0x150),changeMask_,(uint)nodeId_,(int)firstChild_,0,1,
                 (void *)0x1,(void *)0x0,(void *)(uint)!bVar3,false);
      FUN_00411506(7);
    }
    piVar2 = (int *)piVar6[4];
    if (piVar2 == (int *)0x0) {
      piVar4 = (int *)piVar6[2];
      piVar2 = piVar6;
      while ((piVar6 = piVar4, piVar6 != (int *)0x0 && ((int *)piVar6[4] == piVar2))) {
        piVar2 = piVar6;
        piVar4 = (int *)piVar6[2];
      }
    }
    else {
      piVar6 = piVar2;
      for (piVar2 = (int *)piVar2[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
        piVar6 = piVar2;
      }
    }
    cVar1 = *(char *)((int)this + 0x34);
  }
  return;
}

