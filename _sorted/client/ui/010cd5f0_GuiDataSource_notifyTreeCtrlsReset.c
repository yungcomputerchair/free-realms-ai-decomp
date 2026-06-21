// addr: 0x010cd5f0
// name: GuiDataSource_notifyTreeCtrlsReset
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDataSource_notifyTreeCtrlsReset(void * this) */

void __fastcall GuiDataSource_notifyTreeCtrlsReset(void *this)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
                    /* When notifications are enabled, traverses observers, finds GuiTreeCtrl
                       observers, sends a reset/root tree event, and triggers a UI update code 7.
                       Exact data-source subclass is unknown. */
  piVar2 = *(int **)((int)this + 0xc);
  piVar5 = (int *)0x0;
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar5 = piVar3;
    piVar2 = (int *)piVar3[3];
  }
  cVar1 = *(char *)((int)this + 0x34);
  while ((cVar1 != '\0' && (piVar5 != (int *)0x0))) {
    if ((*piVar5 != 0) &&
       (iVar4 = FUN_00d8d382(*piVar5,0,&GuiDataSourceObserver::RTTI_Type_Descriptor,
                             &GuiTreeCtrl::RTTI_Type_Descriptor,0), iVar4 != 0)) {
      GuiTreeCtrl_onDataSourceRowsChanged
                (*(void **)(iVar4 + 0x150),1,0,0,0,1,(void *)0x1,(void *)0x0,(void *)0x0,false);
      FUN_00411506(7);
    }
    piVar2 = (int *)piVar5[4];
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)piVar5[2];
      piVar2 = piVar5;
      while ((piVar5 = piVar3, piVar5 != (int *)0x0 && ((int *)piVar5[4] == piVar2))) {
        piVar2 = piVar5;
        piVar3 = (int *)piVar5[2];
      }
    }
    else {
      piVar5 = piVar2;
      for (piVar2 = (int *)piVar2[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
        piVar5 = piVar2;
      }
    }
    cVar1 = *(char *)((int)this + 0x34);
  }
  return;
}

