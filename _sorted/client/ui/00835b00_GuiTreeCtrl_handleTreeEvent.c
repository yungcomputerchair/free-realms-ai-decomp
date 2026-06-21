// addr: 0x00835b00
// name: GuiTreeCtrl_handleTreeEvent
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiTreeCtrl_handleTreeEvent(void * this, void * event) */

int __thiscall GuiTreeCtrl_handleTreeEvent(void *this,void *event)

{
  undefined4 uVar1;
  int iVar2;
  int b_;
  void *pvVar3;
  int c_;
  int d_;
  undefined4 uVar4;
  undefined4 uVar5;
  
                    /* Handles tree-related UI events: for one event it finds the active GuiTreeCtrl
                       and records a pending tree action, for another it clears state, otherwise it
                       logs/dispatches a generic tree event. String tree(p) and GuiTreeCtrl RTTI
                       identify the domain. */
  if (*(short *)((int)event + 0x1c) == DAT_01bc7488) {
    uVar1 = FUN_00406665();
    iVar2 = FUN_00d8d382(uVar1,0,&GCtrl::RTTI_Type_Descriptor,&GuiTreeCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 == 0) {
      b_ = 0;
    }
    else {
      b_ = (**(code **)(*(int *)(iVar2 + 0x110) + 8))();
    }
    d_ = *(int *)((int)this + 0x1e0);
    c_ = *(int *)((int)this + 0x1dc);
    pvVar3 = (void *)FUN_0081ef10(this);
    GuiDataSourceRegistry_addPendingRecord(&DAT_017f9120,pvVar3,(int)event,iVar2,b_,c_,d_);
    return 1;
  }
  if (*(short *)((int)event + 0x1c) == DAT_01bc7244) {
    *(undefined4 *)((int)this + 0x1d8) = 0;
    return 1;
  }
  uVar5 = 0;
  uVar4 = 0;
  pvVar3 = event;
  uVar1 = FUN_0081ef10(this);
  FUN_0081e4b0("tree(p)",uVar1,pvVar3,uVar4,uVar5);
  iVar2 = FUN_00642087(event);
  return iVar2;
}

