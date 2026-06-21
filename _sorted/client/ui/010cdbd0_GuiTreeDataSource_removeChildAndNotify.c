// addr: 0x010cdbd0
// name: GuiTreeDataSource_removeChildAndNotify
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiTreeDataSource_removeChildAndNotify(void * node) */

void __thiscall GuiTreeDataSource_removeChildAndNotify(void *this,void *node)

{
  char cVar1;
  void *this_00;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint changeMask_;
  void *nodeId_;
  int firstChild_;
  undefined1 *arg7;
  int local_4;
  
                    /* Removes a tree data-source child and notifies attached GuiTreeCtrl bindings.
                       Evidence is paired use with GuiTreeDataSource_addChildAndNotify and callers
                       rebuilding tree data sources. */
  this_00 = *(void **)((int)node + 4);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  else {
    local_4 = FUN_010cda20(node);
    GCtrl_removeChild(this_00,node);
  }
  piVar6 = (int *)0x0;
  for (piVar2 = *(int **)((int)this + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    piVar6 = piVar2;
  }
  cVar1 = *(char *)((int)this + 0x34);
  while ((cVar1 != '\0' && (piVar6 != (int *)0x0))) {
    if ((*piVar6 != 0) &&
       (iVar5 = FUN_00d8d382(*piVar6,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                             &GuiTreeCtrl::RTTI_Type_Descriptor,0), iVar5 != 0)) {
      bVar3 = this_00 != (void *)0x0;
      if (bVar3) {
        arg7 = &DAT_00000004;
        changeMask_ = 4;
        nodeId_ = this_00;
        firstChild_ = local_4;
      }
      else {
        arg7 = (undefined1 *)0x1;
        changeMask_ = 1;
        nodeId_ = (void *)0x0;
        firstChild_ = 0;
      }
      GuiTreeCtrl_onDataSourceRowsChanged
                (*(void **)(iVar5 + 0x150),changeMask_,(uint)nodeId_,firstChild_,(uint)bVar3,
                 (uint)!bVar3,arg7,(void *)0x0,(void *)0x0,false);
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

